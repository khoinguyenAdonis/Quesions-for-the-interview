## Câu hỏi ôn tập C-C++ 

<details>
    <summary><h3>⭐Tại sao lại sử dụng ngôn ngữ C<h3></summary>
    
C có nhiều ưu điểm chẳng hạn như : về mặc tốc độ, tính linh hoạt tính module và khả năng mở rộng. đặc biệt nó gần với ngôn ngữ máy cho khả năng linh hoạt vể kiểm soát vùng nhớ tác động lên phần cứng sâu hơn. 
</details>

<details>
    <summary><h3>⭐ Điểm khác biệt C/C++ <h3></summary>

C là ngôn ngữ cơ sở nền tảng cho nhiều ngôn ngữ khác, trong đó bao gồm c++, vì vậy c và c++ có nhiều điểm khác biệt nhau. C theo hướng thủ tục còn c++ hướng đối tượng. 
    
Hướng thủ tục là c chia nhỏ chương trình thành các hàm và hoạt động theo trình tự nhất định. C được trình bài theo hướng tuyến tính thông qua các hàm không có khái niệm lớp hay đối tượng như c++. các hàm của C thì hoạt động độc lập và không có khái niệm đóng gói hay kế thừa như c++.

Về biến thì các biến toàn cục và cục bộ được dùng để chia sẽ dữ liệu giữa giữa các hàm nhưng không có khả năng ẩn nó bên trong 1 đối tuọng .

Quy trình thực thi: thì C thực thi từ trên xuống dưới theo thứ tự, Không có khả năng Đa hình nay nạp chồng 1 cách linh hoạt như c++.

</details>

<details>
    <summary><h3> ⭐ Làm thế nào để tăng và giảm trong C <h3></summary>

++variable or variable++ 

> Sự khác nhau của chúng

++variable : Tăng trước sau dó mới dùng giá trị đó 
```c
int i = 7;
int x = 3;
int c = 7 + (++x) = 11;
```
variable++ : dùng rồi mới tăng 
```c
int i = 7;
int x = 3;
int c = 7 + (x++) = 10;
```

</details>

<details>
    <summary><h3>⭐ Khái niệm con trỏ treo lơ lửng trong C<h3></summary>

Là 1 con trỏ đến 1 vùng nhớ được giải phóng hay đến vùng nhớ k hợp lệ. Khi một con trỏ trở thành con trỏ lơ lửng việc sử dụng sẽ gây ra hậu quả không mông muốn. Khi ta cố gắng tri cập vào địa chỉ của con trỏ lơ lững ta có thể gặp lỗi runtime hay crash hoặc kết quả không đoán trước được.

</details>

<details>
    <summary><h3>⭐ Cách để bạn có thể lấy được dữ liệu người dùng <h3></summary>

Dùng scanf() để đọc giá trị từ bàn phím. Đọc dữ liệu theo các định dạng đã được chỉ định 
</details>

<details>
    <summary><h3>⭐ So sánh global variable và local variable <h3></summary>

- Về thời gian tồn tại
    G_var : tồn tại đến khi chương trình kết thúc.
    L_var : tồn tại trong func mà nó được khởi tạo và sẽ đươc giải phóng khi func kết thúc.
    Static L_var : sẽ tồn tại đến khi chương trình kết thúc. nhưng nó chỉ được gọi tại func khai báo nó. và giữ nguyên giá trị khi được gọi lại tại hàm.
- Về vị trí lưu trữ : 
    G_var: được lưu ở phân vùng data or bss tùy thuộc vào cách khai báo.
    L_var: được lưu tại phân vùng stack của bộ nhớ.
    static l_var : được lưu tương tự như G_var. 

</details>

<details>
    <summary><h3>⭐ String có phải là một kiểu dữ liệu không <h3></summary>

- String không phải là một kiểu dữ liệu nguyên thủy. thay vào đó chuổi trong C được biểu diễn thông qua một mảng ký tự(char []) được kết thúc bằng '\0' null character.
- String có thể được khai báo ở stack head hay là cả .rodata (read only data) dùng con trỏ để trỏ đến phân vùng đó.

</details>

<details>
    <summary><h3>⭐ Library<h3></summary>
Có 2 loại lib là static lib và dynamic lib(shared lib)
>> Sự khác nhau giữa chúng 
    Static lib : là tập hợp các file object đã biên dịch sẵn liên kết lại thành 1 file .a (unix) hay lib(win) Khi biên dịch toàn bộ mã cần thiết từ static lib sẽ được nhúng thảng vào file thực thi . 
    = load nhanh hơn không cần reslove symbol lúc runtime 
    = file thực thi lớn, cần build lại chương trình lúc cập nhật, có thể taoj bản dư thừa củ cùng một thư viện dùng các ứng dụng khác nhau 
    dynamic lib: là thư viện biên dịch riêng biệt .so (unix) hay .dll (win) khi biên dịch chỉ thông tin metadata và sysbol được nhúng vào file thực thi 
    = kích thước file thực thi nhỏ hơn, dễ cập nhật thư viện mà không cần build lại chương trình, các ứng dụng khác nhau có thể dùng chung 1 bản thư viện 
    = Phụ thuộc vào file trên hệ thống thiếu .so hay dll sẽ không chạy, việc resolve symbol có thể mất thời gian lúc runtime, rủi ro version mismatch
</details>

<details>
    <summary><h3>⭐ Khái niệm statck trong C/c++<h3></summary>

là dạng cấu trúc dữ liệu FILO: có nghĩa là dữ liệu đưa vào đầu tiên sẽ nằm dưới đái và khi lấy ra sẽ lấy từ trên xuống.
Stack có bộ nhớ rất thấp tùy thuộc vào kiến trúc hệ điều hành. nếu khai báo vượt quá sẽ gây ra lỗi tràn stack (Stack overflow)
</details>

<details>
    <summary><h3>⭐ Điều gì xảy ra khi một ngoại lệ (exception) được ném ra và không được bắt<h3></summary>

- Ứng dụng bị dừng đột ngột : hệ điều hành trình biên dịch sẽ chấm dứt quá trình thực thi của chương trình để ngăn chặn hành vi không mong muốn 
- Thông báo lỗi hệ thống
- Rò rỉ tài nguyên : Ngoại lệ xảy ra trong khi tài nguyên như tệp tin, bộ nhớ hoặc kết nối mạng đang được sử dụng mà không có cơ chế giải phóng có thể dẫn đến rò rỉ tài nguyên.
- Trạng thái không nhất quán : Nếu chương trình thực hiện 1 thao tác quan trọng(ví dụ như cập nhật dữ liệu) dữ liệu có thể bị sai lệch hoặc không được lưu trữ đầy đủ 
- Ảnh hưởng đến trạng thái người dùng : Trong các ứng dụng giao diện người dùng một ngoại lệ không được xử lý có thể khiến ứng dụng bị treo .
</details>

<details>
    <summary><h3>⭐ Điều gì xảy ra khi ta cố gắn giải phóng con trỏ đã giải phóng trc đó <h3></summary>

- Lỗi segmentation fault Hệ thống có thể phát hiện lỗi truy cập bộ nhớ không hợp lệ và chấm dứt chương trình với lỗi segmentation fault 
- Lỗi khó đoán định : Bộ nhớ có thể thay đổi không mong muốn, dẫn đến hành vi kỳ lại trong chương trình mà khó xác định nguyên nhân .
- Rò rỉ hoặc hỏng bộ nhớ: một số hệ thống quản lý bộ nhớ có thể cấp phát lại vùng nhớ bị giải phóng, gây ra lỗi truy suất dữ liệu hoặc chương trình treo.
- Lỗ hỏng bảo mật 
</details>

<details>
    <summary><h3>⭐ <h3></summary>

</details>