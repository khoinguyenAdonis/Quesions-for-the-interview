#include <iostream>
#include <cstring>

class myClass {
    private : 
        char *data;
    public : 
        // constructor 
        myClass(const char * s) : data{nullptr}{
            data = new char[std::strlen(s) + 1 ];
            strcpy(data,s);
        }
        // copy constructor
        myClass(const myClass& source) : data{nullptr}{
            data = new char[std::strlen(source.data) + 1 ];
            strcpy(data,source.data);
        }
        // overload operator 
        myClass& operator = (const myClass& other){
            if (this == &other){ // seft assignment check 
                return *this; // 
            }
            
            delete[] data;  // clean up assignment operator 
            data = new char[std::strlen(other.data) +1];
            strcpy(data, other.data);

            return *this;
        }

        void set_data(const char * s){
            delete [] data;
            data = new char[std::strlen(s) + 1 ];
            strcpy(data,s);
        }

        void display(void){
            std::cout << data<< std::endl;
        }

};

int main (void){
    myClass obj1("Hong Kong");
    myClass obj2 = obj1;

    myClass obj3("vietnam");
    obj1.display(); // Hong Kong
    obj2.display(); // Hong Kong
    std::cout<<"-----------------------"<<std::endl;
    obj1.set_data("China");
    obj1.display(); // China
    obj2.display(); // Hong kong
    
    std::cout<<"-----------------------"<<std::endl;
    obj2 = obj3;
    obj2.display(); // vietnam
    obj1.display(); // China

    return 0;

}

/*tại sao phải dài dòng như vậy trong khi có thể dùng deep copy
Câu hỏi của bạn rất hay! Đúng là việc sử dụng sao chép sâu (deep copy) có thể giúp bạn đơn giản hóa việc quản lý bộ nhớ, 
nhưng việc viết đầy đủ như trong ví dụ là để đảm bảo tính toàn diện và an toàn. Dưới đây là lý do tại sao cách làm đó lại "dài dòng" hơn một chút:

1. Kiểm tra gán chính nó (Self-assignment Check)
Nếu bạn không kiểm tra this == &other, khi gán chính nó, đoạn mã delete[] data; sẽ xóa bộ nhớ hiện tại trước khi dữ liệu được sao chép, 
dẫn đến việc sao chép vào vùng nhớ đã bị xóa (undefined behavior).

Dù tình huống này hiếm gặp, nó vẫn có thể xảy ra. Việc kiểm tra gán chính nó đảm bảo rằng chương trình chạy ổn định,
kể cả trong các trường hợp không mong muốn.

2. Giải phóng tài nguyên cũ
Khi sử dụng sao chép sâu (deep copy), bạn thường cần phải giải phóng tài nguyên cũ để tránh rò rỉ bộ nhớ (memory leak).
 Điều này quan trọng đối với các class sử dụng dynamic memory allocation (bộ nhớ được cấp phát động như new).

3. Tính mở rộng và bảo trì mã
Đôi khi, việc viết đầy đủ giúp bạn dễ dàng bảo trì và mở rộng mã nguồn hơn. Ví dụ:

Bạn có thể thêm nhiều thành phần khác (không chỉ con trỏ) vào class mà không cần thay đổi toàn bộ cách thức hoạt động của toán tử gán.

Đảm bảo mã của bạn dễ đọc và rõ ràng hơn, nhất là trong các dự án lớn.

4. Tuân theo nguyên tắc 3 (Rule of Three)
Khi bạn đã phải triển khai Copy Constructor (hàm sao chép) và Destructor, thì việc viết thêm toán tử gán (=) là cần thiết để đảm bảo class 
hoạt động đúng cách trong mọi trường hợp. Điều này giúp bảo vệ các tài nguyên động mà class quản lý.*/