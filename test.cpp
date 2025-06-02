#include <iostream>
#include <string>
#include <vector>
#include <dirent.h>   // For opendir, readdir, closedir
#include <sys/stat.h> // For stat, lstat, S_ISDIR, S_ISREG
#include <unistd.h>   // For chdir, getcwd
#include <cstring>    // For strcmp
#include <limits.h>   // For PATH_MAX (để định nghĩa kích thước buffer cho getcwd)
#include <fstream>    // For std::ofstream (để tạo file mẫu)
#include <filesystem> // For fs::create_directory, fs::remove_all (để tạo/xóa thư mục mẫu)

// Sử dụng namespace alias để code ngắn gọn hơn cho các hàm filesystem (chỉ dùng cho setup test case)
namespace fs = std::filesystem;

// Hàm hỗ trợ để in các cấp độ thụt lề
void print_indentation(int depth) {
    for (int i = 0; i < depth; ++i) {
        std::cout << "  "; // In 2 dấu cách cho mỗi cấp độ
    }
}

// --- Ví dụ: Duyệt sâu (Recursive Scan) sử dụng POSIX System Calls ---
// Liệt kê tất cả các mục trong thư mục và các thư mục con của nó.
// dir_path: Đường dẫn của thư mục cần duyệt.
// depth: Độ sâu hiện tại trong cây thư mục (dùng để thụt lề).
void list_directory_recursive_posix(const std::string& dir_path, int depth) {
    DIR* dir;             // Con trỏ tới cấu trúc thư mục
    struct dirent* entry; // Con trỏ tới mục nhập thư mục
    struct stat stat_buf; // Cấu trúc để lưu thông tin file/thư mục

    // Mở thư mục
    dir = opendir(dir_path.c_str());
    if (dir == NULL) {
        // In lỗi nếu không thể mở thư mục (ví dụ: không có quyền, thư mục không tồn tại)
        print_indentation(depth);
        std::cerr << "Lỗi: Khong the mo thu muc: " << dir_path << std::endl;
        return;
    }

    // Đọc từng mục trong thư mục
    while ((entry = readdir(dir)) != NULL) {
        // Bỏ qua các mục "." (thư mục hiện tại) và ".." (thư mục cha)
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // Xây dựng đường dẫn đầy đủ của mục hiện tại
        std::string full_path = dir_path + "/" + entry->d_name;

        // Lấy thông tin chi tiết về mục (file/thư mục)
        // lstat được dùng để không theo symbolic link, nếu bạn muốn theo link thì dùng stat
        if (lstat(full_path.c_str(), &stat_buf) == -1) {
            print_indentation(depth);
            std::cerr << "Lỗi: Khong the lay thong tin file/thu muc: " << full_path << std::endl;
            continue; // Bỏ qua mục này và tiếp tục với mục khác
        }

        print_indentation(depth);
        std::cout << "- " << entry->d_name;

        if (S_ISDIR(stat_buf.st_mode)) { // Kiểm tra nếu là thư mục
            std::cout << " (Thu muc)";
            std::cout << std::endl;
            // Gọi đệ quy để duyệt thư mục con
            list_directory_recursive_posix(full_path, depth + 1);
        } else if (S_ISREG(stat_buf.st_mode)) { // Kiểm tra nếu là tệp tin thông thường
            std::cout << " (Tap tin)";
            std::cout << std::endl;
        } else {
            std::cout << " (Loai khac)"; // Symbolic link, FIFO, socket, v.v.
            std::cout << std::endl;
        }
    }

    // Đóng thư mục sau khi duyệt xong
    closedir(dir);
}


int main() {
    // --- Tạo một cấu trúc thư mục và file mẫu để kiểm tra ---
    try {
        fs::create_directory("my_root_dir");
        fs::create_directory("my_root_dir/subdir1");
        fs::create_directory("my_root_dir/subdir2");
        std::ofstream("my_root_dir/file1.txt") << "Content of file1";
        std::ofstream("my_root_dir/subdir1/file2.txt") << "Content of file2";
        std::ofstream("my_root_dir/subdir2/file3.log") << "Content of file3";
        std::ofstream("my_root_dir/subdir2/another_file_named_subdir") << "This is a file named another_subdir";
        std::cout << "Da tao cau truc thu muc mau." << std::endl;
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Loi khi tao cau truc thu muc mau: " << e.what() << std::endl;
    }

    // --- Lấy thư mục làm việc hiện tại bằng getcwd() ---
    char current_path_buffer[PATH_MAX]; // PATH_MAX là hằng số định nghĩa độ dài tối đa của đường dẫn
    std::string current_dir_str;

    if (getcwd(current_path_buffer, sizeof(current_path_buffer)) != NULL) {
        current_dir_str = current_path_buffer;
        std::cout << "\nThu muc lam viec hien tai: " << current_dir_str << std::endl;
    } else {
        perror("Loi khi lay thu muc hien tai (getcwd)");
        return 1; // Thoát nếu không lấy được đường dẫn
    }

    // --- Thực hành duyệt sâu bằng POSIX System Calls cho thư mục mẫu ---
    // Chúng ta sẽ duyệt thư mục mẫu "my_root_dir" nằm trong thư mục hiện tại
    std::string path_to_scan = current_dir_str + "/my_root_dir";
    std::cout << "\n--- Duyet cay thu muc su dung POSIX System Calls cho: " << path_to_scan << " ---" << std::endl;
    list_directory_recursive_posix(path_to_scan, 0);
    std::cout << "---------------------------------------------------" << std::endl;

    // --- Ví dụ: Duyệt thư mục hiện tại (nơi bạn chạy chương trình) ---
    std::cout << "\n--- Duyet thu muc hien tai (" << current_dir_str << ") ---" << std::endl;
    list_directory_recursive_posix(current_dir_str, 0);
    std::cout << "---------------------------------------------------" << std::endl;


    // Xóa thư mục và file mẫu sau khi kiểm tra
    try {
        // fs::remove_all("my_root_dir"); // Bỏ comment để xóa
        // std::cout << "\nDa xoa thu muc va file mau." << std::endl;
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Loi khi xoa thu muc mau: " << e.what() << std::endl;
    }

    return 0;
}