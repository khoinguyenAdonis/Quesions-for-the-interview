## Câu hỏi ôn tập C-C++ 
<details> 
<summary><h2> Các câu hỏi thường gặp trong C/C++<h2></summary>
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
    <summary><h3>⭐ Cấu trúc dữ liệu tree<h3></summary>

- Là một kiểu cấu trúc phân cấp trong đó mỗi phần tử(node) có thể có nhiều phần tử con Một số loại cây phổ biến 

Binary tree(cây nhị phân) : mỗi note có tối đa 2 phần tử con  
binary search tree cây nhị phân có tính chất đặt biệt. Với mỗi node, tất cả các giá trị bên trái nhỏ hơn node và các giá trị bên phải lớn hơn node 
B-tree : được dùng trong nhiều hệ thống tệp
AVL-tree Cây Bts có thêm tập tính cân bằng để đảm bảo hiệu xuất tốt khi tìm kiếm.  
</details>

<details>
    <summary><h3>⭐ Khái niệm binary tree<h3></summary>

-> cấu trúc dữ liệu dạng cây mỗi node có tối đa 2 node con một bên trái 1 bên phải , có 1 node root từ đó các node con được xây dựng dựa trên node root. 
-> Có thể rỗng, tức là không có node nào. 

</details>

<details>
<summary><h3>⭐ Sự khác biệt của delete và delete [] trong c++<h3></summary>

-> cả 2 đều được dùng để giải phóng bộ nhớ của một đối tượng được cấp phát bằng new.
->> delete : giải phóng một đối tượng được cấp phát bằng new.
->> delete[] : giải phóng một mảng đối tưởng cấp phát bằng new[].
</details>

<details>
<summary><h3>⭐  <h3></summary>
</details>
</details>

<details>
<summary><h2> C++ <h2></summary>

<details>
<summary><h3>mdi-home  Class and Object<h3></summary>

-> Class là gì :  class là một kiểu cấu trúc dữ liệu trong c++ do người dùng tự định nghĩa dùng để mô tả các thuộc tính và phương thức. class là một khuôn mẫu sẽ không tốn bộ nhớ ram cho đến khi được dùng để khởi tạo.
-> object là gì : là 1 đối tượng được khai báo tư class và nó sẽ chiếm một vùng nhớ cụ thể trên ram để lưu trữ dữ liệu và cung cấp các phương thức của class.

<details>
<summary><h4>=>> Constructor and destructor <h4></summary>
-> Constructor là gì : Constructor là 1 phương thức đặt biệt, được gọi khi khởi tạo object. mục đích là khởi tạo giá trị ban đầu cho obj. 
->> Đặc điểm : có trùng tên với class và không có kiểu trả về kể cả kiểu void, có thể overload được với các parameter khác nhau.

-> Destructor  là gì : ngược lại với destructor là 1 phương thức được gọi tự động khi object ra khỏi phạm vi hoạt động hoặc bị giải phóng.
->> Đặc điểm : giống tên class nhưng có dấu ngã và kcos tham số và k overload.

</details>
<details>
<summary><h4>=>> Copy constructor<h4></summary>

-> là 1 contructor đặt biệt để tạo 1 đối tương mới bằng cách sao chep giá trị của 1 obj hiện có. nó được dùng nếu bạn muốn đảm bảo quá trình copy 1 cách chính xác và và kiểm soát được hành vi sao chep. 
->> Tham số truyền vào là 1 tham chiếu hằng đến 1 obj 
->> copy là 1 khái niệm và deep copy hay shallow là 1 quá trình thực hiện 

```c++
class obj1 {
    public:
    int x ;
    obj1(int a) : x(a){}
    obj1(const obj1 &a){
        x = a.x;
    }
};

int main(void){
    obj1 myObj(2);
    obj1 my_2 = myObj;
    printf("%d",my_2.x); // => out 2
    return 0;
}
```
</details>
<details>
<summary><h4>=>> Move constructor <h4></summary>

-> Move constructor la gi : là 1 constructỏ đặc biệt thay vì sao chép lại nó sẽ lấy giá trị của 1 obj sẵn có và đặt giá trị của obj có sẵn về trạng thái hợp lệ nhưng rỗng (con trỏ của đối tượng cũng sẽ là con trỏ null pointer) 

-> ứng dụng: khi làm việc với dữ liệu lớn(như mảng hay danh sách hoặc đối tượng có vùng nhớ động) thì giúp giảm tài nguyên và tối ưu chi phí. đảm bảo thao tác nhanh chống mà không tạo ra bản sao.

```c++
class obj1 {
    public:
    int* x ;
    obj1(int a) : x(a){}
    obj1(obj1 &&a){
        x =new int(a.x);
    }
};

int main (void){
    obj1 my_1(2);
    obj1 my_2 = std::move(my_1);
    my_1.x ; /// khong co gi
    my_2.x ; /// 2
}
```
</details>

<details>
<summary><h4>=>> Shallow copy <h4></summary>

-> tạo bản sao chứa tham chiếu hoặc con trỏ đến dữ liệu góc thay vì sao chép toàn bộ. vì vậy khi thay đổi giá trị thì đối tượng gốc cũng bị ảnh hưởng. do cùng tham chiếu đến 1 địa chỉ.
-> lưu ý shallow copy có thể gây lỗi , đặt biệt trong trường hợp giải phóng bộ nhớ. con trỏ obj còn lại sẽ bị tình trạng con trỏ lơ lửng.
```c++
class obj1 {
    public:
    int* x ;
    obj1(int a) {
        x = new int (a);
    }
    obj1(const obj1 &a){
        x =a.x;
    }
};

int main (void){
    obj1 my_1(2);
    obj1 my_2 = my_1;
    my_1.x ; /// 2
    my_2.x ; /// 2
}
```
</details>
<summary><h4>=>> Deep copy  <h4></summary>

-> là cách sao chép mà các đối tượng bằng cachs nhân bản hoàn toàn và nó đều đọc lập và không chia sẽ vùng nhớ với đối tượng gốc.
```c++
class obj1 {
    public:
    int* x ;
    obj1(int a) {
        x = new int (a);
    }
    obj1(const obj1 &a){
        x =new int (*a.x);
    }
};

int main (void){
    obj1 my_1(2);
    obj1 my_2 = my_1;
    my_1.x ; /// 2
    my_2.x ; /// 2
    *my_2.x =3;
    my_1.x ; /// 2
    my_2.x ; /// 3  
}
```

</details>
<details>
<summary><h4>=>> Friend  <h4></summary>

-> dungf để khai báo một hàm hoặc 1 class là bạn bè của 1 class khác khi 1 hàm hoặc 1 class đuocwj khai báo friend nó có quyền truy cập vào các thành viên (private) or protected mặc dù theo mặc định thì các hàm này chỉ cps thể truy cập từ bên trong class.
```c++
class myObj{
    private : 
    int x;
    public :
    myObj(int a) : x(a){}

    friend void display (const myObj &obj);
}

void display (const myObj &obj){
    printf("%d", obj.x);
}

int main (){
    myObj o1(1);
    display(o1); // 1
    return 0;
}
/////////////////
class myObj{
    private : 
    int x;
    public :
    myObj(int a) : x(a){}

    friend class B;
}
class B{
    public:
    void display (const myObj &obj){
    printf("%d", obj.x);
}
}

int main (){
    myObj o1(1);
    B o2;
    o2.display(o1); // 1
    return 0;
}
```
</details>
<details>
<summary><h4>=>> this pointer <h4></summary>

-> COn tror this được sử dụng bên trong class giúp tham chiếu đến đối tượng hiện tại đang goi thành viên của class. 

->> Chỉ dùng bên trong class luôn trỏ đến đối tượng hiện tại tức là đối tượng mà phương thức đó đang gọi giúp tham chiếu đến chính đối tượng hiện tại đâg gọi thành viên của class. Hữu ích khi có sự trùng lập giữa biến và tham số giúp phân biệt rõ ràng hơn

</details>
</details>
</details>
