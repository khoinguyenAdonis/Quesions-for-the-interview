## Câu hỏi ôn tập C-C++ 
<details> 
<summary><h2> ❓ Các câu hỏi thường gặp trong C/C++<h2></summary>
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
<summary><h2>☑️ C++ <h2></summary>

<details>
<summary><h3>🌏 Class and Object<h3></summary>

-> Class là gì :  class là một kiểu cấu trúc dữ liệu trong c++ do người dùng tự định nghĩa dùng để mô tả các thuộc tính và phương thức. class là một khuôn mẫu sẽ không tốn bộ nhớ ram cho đến khi được dùng để khởi tạo.
-> object là gì : là 1 đối tượng được khai báo tư class và nó sẽ chiếm một vùng nhớ cụ thể trên ram để lưu trữ dữ liệu và cung cấp các phương thức của class.

<details>
<summary><h4>💙 Constructor and destructor <h4></summary>
-> Constructor là gì : Constructor là 1 phương thức đặt biệt, được gọi khi khởi tạo object. mục đích là khởi tạo giá trị ban đầu cho obj. 
->> Đặc điểm : có trùng tên với class và không có kiểu trả về kể cả kiểu void, có thể overload được với các parameter khác nhau.

-> Destructor  là gì : ngược lại với destructor là 1 phương thức được gọi tự động khi object ra khỏi phạm vi hoạt động hoặc bị giải phóng.
->> Đặc điểm : giống tên class nhưng có dấu ngã và kcos tham số và k overload.

</details>
<details>
<summary><h4>💙 Copy constructor<h4></summary>

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
<summary><h4>💙 Move constructor <h4></summary>

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
<summary><h4>💙 Shallow copy <h4></summary>

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
<details>
<summary><h4>💙 Deep copy  <h4></summary>

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
<summary><h4>💙 Friend  <h4></summary>

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
<summary><h4>💙 this pointer <h4></summary>

-> COn tror this được sử dụng bên trong class giúp tham chiếu đến đối tượng hiện tại đang goi thành viên của class. 

->> Chỉ dùng bên trong class luôn trỏ đến đối tượng hiện tại tức là đối tượng mà phương thức đó đang gọi giúp tham chiếu đến chính đối tượng hiện tại đâg gọi thành viên của class. Hữu ích khi có sự trùng lập giữa biến và tham số giúp phân biệt rõ ràng hơn

</details>
</details>

<details>
<summary><h3>🌏 Overloading <h3></summary>

- Overloading là gì : là một kỹ thuật trong c++ cho phép nạp chồng các hàm toán tử có tên trùng nhau nhưng có các chức năng khác nhau, dựa vào số lượng hoặc kiểu tham số mà ta cung cấp. overloading giúp cho mã nguồn linh hoạt và dễ đọc hơn

- lưu ý khi dùng không thể overload :: .* . . hai hàm chỉ dựa trên kiểu trả về

- overloading  function : sử dụng 1 tên hàm cho nhiều chức năng dựa vào tham số truyền vào.
- operator overloading : mở rộng chức năng của toán tử để làm việc với kiểu dữ liệu tùy chỉnh.

<details>
<summary><h4>💙 copy <h4></summary>

- Khi operator overloading = kiểm soát đối tuongjw được gán từ đối tượng khác

- Toán tử này nó khác với copy constructor nó chỉ được gọi khi cả 2 đã tồn tại 

```c++
class my_obj{
    private :
        int * data;
    public :
        my_obj(int a){
            data = new int(a);
        }
        my_obj& operator=(const my_obj& obj){
            if (this != &obj){
                delete data;
                *(this->data) = new(*obj.data);
            }
            return *this;
        }
};

int main void {
    my_obj o1(12);
    my_obj o2(1);
    o2 = o1;
    // o2.data =12
}

```
</details>
<details>
<summary><h4>💙 Move <h4></summary>

tương tự như move constructor thì move operator cũng là duy chuyển dữ liệu từ đối tượng này sang đối tượng khác và đưa dữ liệu của đối tưởng củ thành rỗng . chỉ khác là nó chỉ áp dụng cho 2 đối tượng đã tạo rồi. 

```c++
class my_obj{
    private :
        int * data;
    public :
        my_obj(int a){
            data = new int(a);
        }
        my_obj& operator=(const my_obj& obj){
            if (this != &obj){
                delete data;
                *(this->data) = new(*obj.data);
                obj.data = nullptr; 
            }
            return *this;
        }
};

int main void {
    my_obj o1(12);
    my_obj o2(1);
    o2 = std::move(o1);
    // o2.data =12
    // o1.data = null
}

```
</details>

<details>
<summary><h4>💙 member function <h4></summary>

- khi overloading member function thì các member đó có thể cùng trong 1 class cùng tên với nhau nhưg sẽ khác các parameter 
</details>

</details>

<details>
<summary><h3>🌏 Inheritance <h3></summary>

- Inheritance là gì : Cho phép các lớp con kế thừa các thuộc tính và phương thức của lớp khác. Mục đích là giảm thiểu mã nguồn tái sữ dụng lại mã.

- public Inheritance : lớp con kế thừa các thành phần của lớp cha và đặt nó ở trạng public bên lớp con. các trạng thái protected được kế thưa nhưng sẽ vẫn ở trạng thái protected và chỉ có thể truy cập bằng các phương thức được cup cấp ở lớp con.Đối vói private khi kế thừa thì lớp con vẫn có nhưng các thành phần này phải được gọi từ public tại lớp cha khai báo và lớp con kế thừa.

- protected Inheritance : lớp con kế thừa và đặt các kế thừa ở trạng thái protected tức là không thể gọi bên ngoài nhưng có thể gọi thông qua các method mà lớp con cung cấp và có thể kế thừa cho các lớp con tiếp theo.

- private Inheritance : Lớp con kế thừa và đặt tất cả các thuộc tính về pravite. thành viên private của lớp cha vẫn phải gọi qua phương thức được khai báo ở lớp cha. còn các thành viên ở protected or public vẫn có thể truy cập qua phương thức của lớp con. nhưng các kế thừa sau sẽ phải được gọi qua phương thức của lớp lớn hơn.

<details>
<summary><h4>💙 Constructor and destructor <h4></summary>

- Khi lóp con được khởi tạo thì nó sẽ gọi constructor của lớp cha trước. nếu lớp cha không có constructor thì chương trinhf sẽ tạo 1 constructor cho lớp lớp đó. nếu lớp cha k khai báo constructor defaul mà khai báo constructor có tham số cài đặ thì lớp con phải gọi tường minh trước VD:
```c++
class parent {
    private : 
        int data;
    public :
        parent(int a) : data(a){}
};

class child : public parent {
    private : 
        int data;
    public :
        chill(int value ) : parent(value){}
};
```

</details>

<details>
<summary><h4>💙 Copy and move <h4></summary>

Copy hoặc Move Constructor trong Kế thừa:

Copy/Move Constructor không chỉ ở lớp con mà còn ở lớp cha:

Khi lớp con có copy constructor hoặc move constructor, lớp con phải tường minh gọi copy hoặc move constructor của lớp cha.

Nếu không gọi tường minh, copy/move constructor mặc định của lớp cha (nếu có) sẽ được gọi tự động.

Constructor mặc định và Constructor đặc biệt:

C++ sẽ tự động tạo constructor mặc định (default constructor), copy constructor mặc định, hoặc move constructor mặc định cho lớp, nhưng:

Chỉ khi lớp không khai báo bất kỳ constructor nào.

Nếu lớp có các trường hợp đặc biệt như con trỏ hoặc quản lý vùng nhớ động, và không định nghĩa copy/move constructor tường minh, các constructor mặc định có thể không được tạo, dẫn đến lỗi biên dịch hoặc lỗi khi chạy chương trình (runtime).

Khi đã khai báo constructor bất kỳ:

Nếu một lớp đã khai báo constructor (ví dụ, constructor có tham số), C++ sẽ không tạo constructor mặc định hoặc copy/move constructor mặc định.

Điều này là do C++ coi rằng lập trình viên muốn tự kiểm soát cách đối tượng được khởi tạo.

Khi lớp cha chỉ có constructor tham số, mà lớp con không gọi tường minh copy/move constructor của lớp cha, điều này sẽ gây lỗi biên dịch.

Hậu quả khi không gọi tường minh trong kế thừa:

Khi lớp cha không có constructor mặc định và lớp con không gọi tường minh copy/move constructor của lớp cha, chương trình không thể biên dịch được do thiếu cách khởi tạo phù hợp cho lớp cha.

</details>

</details>

<details>
<summary><h3>🌏 Polymorphism  <h3></summary>

- là tính đa hình trong lập trình hướng đối tượng cho phép 1 đối tượng có thể biểu diễn theo nhiều thuộc tính khác nhau giúp tăng tính linh hoạt mở rộng trong thiết kế chương trình.

- có 2 loại đa hình : 
    
    compiler-time polymorphims : đây là loại đa hình quyết định cách thức hoạt động  của đối tượng tại thời điểm biên dịch chương trình.

    runtime polymorphism : quyết đinh cách thức tại thời điểm chạy. DDuocj thực hiện thông qua kế thừa hoặc hàm ảo hóa(virtual function)

<details>
<summary><h4>💙 Virtual <h4></summary>

- là 1 method trong lớp base được thiết kế để có thể ghi đè bởi các lớp dẫn xuất, cho phép thực hiện runtime-polymorphism. 

- khi 1 phương thức được khai báo virtual điều này có nghĩa là lớp dẫn xuất có thể overide lại cùng tên cùng tham số 

- c++ tạo 1 bảng đặt biệt Vtable chứa các con trỏ đến các phương thức tương ứng của đối tượng thay vì phương thức của lớp cơ sở. tại thời gian chạy con trỏ được sử dụng đê truy cập đến phương thức thực tế của đối tượng. 

- Dùng chung virtual cùng với destructor trong kế thừa đảm bảo destructor của lớp cơ sở được gọi một cách chuẩn sat ví dụ như trong trường hợp dùng con trỏ lớp cơ sở để quản lý đối tượng của lớp dẫn suất mà không dùng virtual thì khi chúng ra giải phóng con trỏ chỉ giải phòng vùng nhớ của lớp cơ sở lớp dẫn xuất k được gọi destructor đúng cách.

vd : khi dùng chung với virtual destructor

```c++
class base{
    private :
        int a
    public : 
        base(int a) : this->a(a){}
        virtual ~base(){
            cout << "Base destructor called" << endl;
        };
};

class derived : public base {
    private:
    int* data;

public:
    derived() {
        data = new int[100]; // Cấp phát vùng nhớ
        cout << "Derived constructor called" << endl;
    }

    ~derived() { // Destructor của lớp dẫn xuất
        delete[] data; // Giải phóng vùng nhớ
        cout << "Derived destructor called" << endl;
    }
};

int main(void){
    base *obj = new derived();
    delete obj;
}
```

    output : Derived destructor called
             Base destructor called




</details>
<details>
<summary><h4>💙 Abstract <h4></summary>

- Đươc sử dụng để định nghĩa 1 khung chung hoặc giao diện cho các lớp dẫn suất. Nó k được sử dụng trực tiếp mà được khai báo qua các lớp con.

- Note : các lớp kế thừa phải khai báo nó không thì chính lớp đó cũng thành 1 abstract . Nên có các virtual destructor để đảm bảo được hủy đúng cách.

- lợi ích là nó tanwng tính linh hoạt và khả năng mở rộng. các lớp mới dễ dàng kế thừa và triển khai mà không cần thay đổi mã nguồn hiện tại. Hổ trợ đa hình giúp các đối tượng khác nhau có thể xử lý thông qua 1 giao diện chung.

</details>
</details>

<details>
<summary><h3>🌏 Smart pointer  <h3></summary>

- smart pointer là một khái niệm dùng để quản lý tự động vùng nhớ động và tài nguyên, thay vì phải lo lắng về việc giải phóng vùng nhớ sau khi dùng. Smart pointer sẽ tự động giải phóng sau khi dùng tránh rò rỉ và duoble delete trong lập trình.

- Các loại smart pointer

    Unique pointer : Chỉ định rỏ quuyền sở hữu ownship của tài nguyên , tại 1 thời điểm chỉ có 1 unique pointer không thể sao chép nhưng có thể move nó. 

    Share poniter : Hổ trợ nhiều đối tượng chia sẽ quyền sở hữu, nó dùng reference count để đếm số lượng đối tượng đang sở hữu khi mà = 0 thì sẽ tự động giải phóng vùng nhớ. 

```c++
int main (void){
    std::share_ptr<int> ptr_1 = std::make_share<int>(20); // count = 1
    {
        std::shared_ptr<int> ptr2 = ptr1; //count = 2
    }
    //count = 1
    return 0;  // count = 0

}
```
    Luu y khi dùng share_pointer phải tránh vòng lập tham chiếu như share A = share b ; và share b lại = share a nếu như vậy referent count sẽ không bao giờ bằng 0; 

    Cách giải quyết là dùng weak pointer vì weak pointer không tăng vòng lập tham chiếu. nó chỉ theo dỗi share poniter mà không tham gia vào quyền sở hữu

</details>

<details>
<summary><h3>🌏 STL<h3></summary>

- Là 1 thư viện tiêu chuẩn trong c++ cung cấp 1 tập hợp các công cụ mạnh mẻ trong c++ để làm việc với cấu trúc dữ liệu và thuật toán. Nó được thiết kế để giúp Dev dễ dàng thao tác với dữ liệu đồng thời đảm bảo tính hiệu quả trong việc quản lý bộ nhớ, xử lý các phép toán, và thực thi các thuật toán phổ biến. 

- Container : là 1 cấu trúc dữ liệu giúp nó quản lý cá nhóm phân tử  các contaner tiêu biểu như list vector 

- Algorithm : STL cung cấp các thuật toán được định nghĩa trước để xử lý dữ liệu như: Sắp xếp (sort) Tìm kiếm (find) Duyệt (for_each) Loại bỏ (remove) Thuật toán hoạt động trên các container thông qua iterators.

- Iterarors : Iterators là công cụ để duyệt qua các phần tử trong containers. Nó tương tự con trỏ, giúp bạn truy cập tuần tự các phần tử.

- Lợi ích của STL:

        Tăng năng suất lập trình:
        Giảm thời gian viết mã nhờ các công cụ đã được tối ưu và thử nghiệm kỹ lưỡng.

        Tính linh hoạt:
        STL cung cấp các công cụ có thể làm việc với bất kỳ loại dữ liệu nào thông qua templates.

        Hiệu suất cao:
        Các cấu trúc dữ liệu và thuật toán trong STL được tối ưu hóa để hoạt động hiệu quả cả về tốc độ và sử dụng bộ nhớ.

        Mã nguồn dễ đọc và bảo trì:
        Sử dụng STL làm cho mã nguồn ngắn gọn, dễ hiểu và có tính module cao.

<details>
<summary><h4>💙 Templates <h4></summary>

- Cung cấp một cách để tạo ra các hàm hoặc các lớp mà kiểu dữ liệu được định nghĩa 1 cách tổng quát. Khi sử dụng templates c++ sẽ tạo ra các phiên bản cụ thể của các hàm hoặc các lớp tương ứng trong quá trình biên dịch

- Function templates : Cho phép định nghĩa hàm với kiểu dữ liệu tổng quát

vd 
```c++
template <typename T>
T add(T a, T b){
    return a+b;
}

int main(void){
    add<float>(5.6, 1.2); // add = 6.7 float
    add<int>(12,3); // 15 int
}

```

- Class template : ddinhj nghia lop voi nhieu kieu du lieu khac nhau

```c++
template <typename A>
class base{
    A data;
    base(A data) : this->data(data){}
    ~base();
}

int main(){
    base<int> obj_1(1); // data = int = 1
    base<string> obj_2("Khoi"); // data = string = Khoi
}
```





</details>

</details>

<details>
<summary><h3>🌏 Lambda expressions<h3></summary>

- Là 1 hàm ẩn danh được khai báo ngay tại nơi cần sử dụng. nó hoạt động như 1 hàm bình thường nhưng có 1 số điểm khác biệt : Không cần đặt tên , có thể truyền trực tiếp vào hàm khác, có thể bắt biến từ môi trường bên ngoài. 

- lợi ích viết hàm ngắn gọn xử lý lọgic ngay tại thời điểm và nó thích hợp với các hàm STL library.  

cấu trúc 
```c++
    [capture] (int x) {body}
    capture : bắt biến từ môi trường bên ngoài 
    (int x) : parameter 
    {body} : xử lý logic 
```

Vd 
```C++
int main (void){
    auto num = [](int a ){return a+1 };
    num(1); // num =2

    vector<int> a = {1,2,3,4,5};

    for_each(a.begin();a.end();
        [](int x){
            cout << x<<endl;
        } 
    );
}

```
</details>

</details>

<details>
<summary><h2>☑️  Linux <h2></summary>

- Là 1 hệ điều hành mã nguồn mở, thuộc họ hệ điều hành giống Unix được xây dựng dựa trên nhân linux. Nổi tiếng với tính linh hoạt ổn định và bảo mật. Thường dùng cho máy chủ, thiết bị nhúng và cả máy tính cá nhân. Đặc điểm nổi bật của Linux là mã nguồn mở, cho phép mọi ng có thể xem và sửa đổi và phân phối mã nguồn điều này làm cho cộng đồng mạnh mẻ và liên tục cải tiến. 

<details>
<summary><h3> porting <h3></summary>

- điều chỉnh và thích ứng mã nguồn của 1 driver vốn có để có thể hoạt động trên 1 kiến trúc khác .
Việc porting là cần thiết :
    - khác kiến trúc như ẢRM x86 
    - Thay đổi API kernel 
    \- Yêu cầu nền tảng cụ thể \
1. khi porting bạn cần làm các bước nào 
- đọc data sheet của thiết bị mục tiêu , tài liệu API kernel cảu phiên bản mục tiêu. 
- XẤc định mã nguồn driver hiện tại
- thiết lập toolchain phù hợp 

</details>

<details>
<summary><h3> Linux memory managetment<h3></summary>

- Không gian địa chỉ (address space)
    2 phần :
        Không gian địa chỉ ảo : mõi tiến trình có 1 không gian địa chỉ ảo riêng. Là 1 phạm vi địa chỉ mà một tiến trình nhìn thấy điều này mang lại 1 số lợi ích. 
            - các tiến trình không thể trực tiếp truy cập bộ nhớ của nhau. Tăng cường bảo mật và ổ định. 
            - các tiến trình sẽ làm việc với các địa chỉ ảo liên tục 
            - chả các trang bộ nhớ (demand paging) được sử dụng mới được tải vào bộ nhớ vật lý khi cần thiết.
        Không gian địa chỉ của kernel : kernel cũng có không gian địa chỉ riêng chứa mã và dữ liệu ánh xạ đến bộ nhớ vật lý. 
- Phân trang (paging): Cả không gian địa chỉ ảo và bộ nhớ vật lý đều được chia thành các trang cố định (thường 4kb trên x86)
    Bảng trang (table page) Kernel duy trì các bảng trang này để ánh xạ các địa chỉ ảo của tiến trình tới các địa chỉ vật lý thực tế. .
    TLB (translation Lookaside buffer) : tăng tốc độ dịch từ địa chỉ ảo sang địa chỉ vật lý bằng cách lưu các ánh xạ gần nhất. 
- Không gian của 1 địa chỉ ảo của 1 tiến trình được chia thành các vùng nhớ khác nhau. stack heap data text bss

1. Linux sử dụng cơ chế phân trang như nào ?

    - Chia Bộ nhớ : Bộ nhớ Vật lý ram được chia thanhf các page. 
                    Không gian địa chỉ của 1 tiến trình cũng được chia thành các trang ảo.

    - Ánh xạ (mapping) : Khi 1 tiến trình truy cập một địa chỉ ảo, phần cứng sẽ phối hợp với kernel để dịch địa chỉ ảo thành 1 địa chỉ vật lý tương ứng. 

    - Demand paging là linux sử dụng 1 kỹ thuật gọi là Demand paging để 1 trang ảo chỉ được tại vào địa chỉ vật lý khi tiến trình thực sự cố gắng truy cập vào. Khi 1 tiến trình khởi chạy hầu hết cac tiến trình của nó không được tải .

    - Page fault: nếu tiến trình truy cập vào 1 trang chưa được tại vào địa chỉ vật lý trên ram or là đã bị swaping) Khi đó cpu sẽ chuyển quyền cho điều khiển cho kernel 
</details>
<details>
<summary><h3> process <h3></summary>

tạo ra 1 tiến trình mới bằng dùng hàm fork tiến trinhg gọi fork thì tiến trình đó được gọi là tiến trình cha. tiến trình con đucợ tạo ra sẽ copy lại các thuộc tính của tiến trình cha nhưng 2 tiến trình này sẽ nằm riêng biệt ở 2 vùng nhớ khác nhau. 

2 lệnh ;à getpid() : gọi id của tiến trình đang gọi nó
        getppid() : gọi ra id của tiến trình cha.

Process managemet : 

khi tiến trình con kết thúc (exit()) thì sẽ gửi đến process cha 1 status tiến trình cha sẽ bắt status đó bằng hàm wait ().
khi wait đucợ gọi nó sẽ bị block. wait() trả về 2 giá trị 1 pid, 2 status kết thúc(fail or true) 
wait có 1 hạn chế là nếu có nhiều process con thì bất cứ tiến trình con nào kết thúc wait đều trả về. nên sinh ra 1 wait id để xác định đúng tiến trình con kết thúc

tiên trnhf orphane và zombie :
Khi tiến trình cha kết thúc trước tiến trình con thì process con gọi là process mồ côi(orphane). 
    Tiến trình con khi này được tiến trình lớn hơn PID =1 thu làm con
Khi con bị skill trước khi cha gọi wait thì tiến trình đó là tiến trình zombie
    Con nó sẽ không thể dùng kill để kết trình được nữa.
    -> các rủi ro : tài nguyên của hệ thống là giới hạn nên các tiến trình cũng có số lượng nhất định
    dẫn đến các bảng pid_t 
    cách giải quyết là kill process cha process zombie sẽ trở thành process mồ coi được pid 1 quản lý bên trong thằng 1 sẽ tự động gọi ra wait để thu nhận con. 
    dùng signal child để bắt lấy mỗi khi tiến trình con kết thúc. 

</details>
<details>

<summary><h3>⏩ Linux file system <h3></summary>

- Tổng quan về file 
    
    Regular file : các file như file text, file excutable
    Directories file : file chứa các file khác.
    Character device file: file đại diện cho các thiết bị không có địa chỉ vùng nhớ. (các ngoại vi như chuộc )
    Block deviec file: File đại diện cho các thiết bị có địa chỉ vùng nhớ (usb bộ nhớ)
    Link file : file đại diện cho file khác. 
        -Hard link: Chia sẻ dữ liệu, file này mất thì file kia vẫn dùng được.

        -Soft link: Chỉ dẫn đường tới file gốc, file gốc mất thì link bị "hỏng."
    
    Socket file : file đại diện cho socket
    pipe file : file đại diện cho pipe

- Phân quyền 

    -rwxrw-rw-

    dấu dầu tiên là loại file 
    3 vị trí têp là là user (u) : 
    3 vị trí kế là group (g) : Linux cho phép add ng dùng vào group nên chỉ có ng trong group mới được sữa
    3 vị trí cuối là other (o) : ai cũng có quyến sữa

    read (r), write (w), excute(x)

lệnh đổi user , sudo chown <name> <file>
lệnh đổi về root 
sudo chown root file_name
Thay đổi nhóm:

bash
sudo chown :root file_name
Thay đổi cả user và group:

bash
sudo chown root:root file_name

giao tiếp với file có các hàm như system call 

open (file, flag mode) return fd(file descriptor)

write (fd, buf, size)




</details>
<details>

<summary><h3>⏩ Multi-Threading <h3></summary>

- cho phép chương trình thực thi nhiều tác vụ đồng thời với nhau. từ đó tăng hiệu suất và giảm thời gian chờ của ứng dụng 

- contextswitch time : thread switch lẹ hơn process.
- Share memory : các thread nằm cùng 1 process dễ dàng trao đổi dữ liệu với nhau . Trên hệ thống multi-core thì các thread có thể hoạt song song với nhau. Nếu 1 thread mà bị block thì các thread khác vẫn hoạt động bình thường. và khi tạo 1 thread thì chúng sẽ được đặt trong stack segment. 

- Nếu crashed thì các threads trên cùng 1 process sẽ bị tạm dừng ngay. Các thread thì nó sẽ ngang hàng với nhau. 

- Để định danh 1 thread thì nó là threadID có thể là số nguyên hoặc nó là 1 struct thông thường nó là 1 struct. Để mà so sánh 2 thằng struct này thì có hàm pthread_self() : threadID và pthread_equal() : truyền vào 2 thread và trả lại kết quả xem nó có giống nhau không .

- Khi viết 1 hàm main process thì hàm đó đc gọi là main thread luôn. tiến trình mà chỉ có main thread thì đơn luồng. còn tiến trình mà tạo thread là đa luồng. 

</details>
<details>

<summary><h3>⏩ Socket <h3></summary>

- là 1 cơ chế truyền thông cho phép các tiến trình có thể giao tiếp với nhau trên cùng 1 thiết bị hay kể cả là khác thiết bị.

- socket được đại diện bởi 1 file socket descriptor. thông tin được mô tả trong file socket 1 domain, type, protocol. 

-> Domain : Unix domain, Internet domain

    Unix domain : giao tiếp giữa các tiến trình trê cung 1 thiết bị.

    Internet domain : giao riếp thông qua Internet IPV4 IPV6.

-> Type có 2 loại : 

    Stream socket (TCP) : qua 3 bước bắt tay để tạo liên kết 
    -> Bind 
    -> Listen 
    -> accept 
    - dữ liệu truyền đi tin cậy đảm bảo nhận theo thứ tự , yêu cầu tạo kết nối trước khi truyền, thường dùng khi chuỗi dữ liệu bit

    Datagram socket (UDP) : nó đơn giản hơn TCP
    - Không tin cậy dữ liệu truyền đi có thể mất, khoogn theo thứ tự, không có thông báo khi truyền lỗi. Không cần tạo kế nối trước khi truền. Truyền data ngay cả khi tiến trình khác k tồn tại. Thường được dùng nếu dữ liệu là các gói tin,


-> ptotocol là cách thức đóng gói dữ liệu cung 1 cập Domain và type chỉ tồn tại 1 protocol nên thường bằng 0 

các bước dùng các system call socket (stream)

Master :
    socket : tạo file socket
    blind : gán socket với địa chỉ
    listen : lắng nghe các kết nối trong hàng đợi
    accept : chấp nhận các kết nối.
client
    connect -> master accept 

    sau đó giữa 2 socket sẽ trao đổi qua read anh write

các bước dùng các system call socket (UDP)

    socket : tạo file socket
    blind : gán socket với địa chỉ

    sau đó giữa 2 socket sẽ trao đổi qua read anh write
</details>
<details>

<summary><h3>⏩ Character device file <h3></summary>

- là mọt loại file trên linux/ unix dùng để giao tiếp giữa user space và kernel space bằng cách ghi và đọc từng byte thường được sử dungjh các thiết bị như usb, thiết bị ngoại vi. đây là cách hữu ích để truyền dữ liệu hoặc gửi yêu cầu. 

- Majo và Minor Là : Là 2 thông số quan trọng trong quản lý các thiết bị và tệp thiết bị. Major number đại diện cho trình điều khiển tương ứng mà kernel dùng để giao tiếp với thiết bị. Minor number là loại cụ thể mà Major quản lý. 

- Class đại diện cho 1 nhóm thiết bị cùng loại giúp cho việc tổ chức và quản lý thiết bị tốt hơn. khi tạo classs các thiết bị cùng 1 class sẽ xuat hienj trong sys/class.

- class hổ trợ tạo device file tương ứng trong dev khong cần phải tạo thủ công bằng mknod. 

- dễ dàng mwor rộng tái sử dụng do nó tạo 1 giao diện chung cho tát cả các thiết bị trong cùng 1 nhóm 

- thích hợp với hệ thống sysfs nó sẽ tạo ra các entry tương ứng trong sysfs. Entry chứa các thuộc tính trạng thái của thiết bị cho phép người dùng hoặc ứng dụng thao tác với thiết bị thông qua các tệp trong sys/class

các lệnh tạo 

    int alloc_chrdev_region(dev_t * dev, unsigned baseminor, unsigned count, const char * name); lệnh cấp phát mijor, minor

    struct class : struct tạo class 

    struct class * __class_create(struct module * owner, const char * name, struct lock_class_key * key); : lệnh tạo class

    struct device * device_create(struct class * class, struct device * parent, dev_t devt, void * drvdata, const char * fmt, ...); lệnh tạo device
    
trong linux khi các lệnh tạo sẽ có các leebnhj hủy tương ứng

như class thì class_destroy, device_destroy
cấp phát thì có lệnh hủy cấp pháp unregister_chrdev_region : hủy đăng ký mijor and minor.

- Cấu trúc cdev struct là một phần của charactor device interface. Cấu trúc của nó giúp dễ dàng đăng ký và quản lý thiết bị với kernel. Mỗi thiết bị ký tự trong kernrnel thường được liên kết với instance của struct cdev. Nó liên kết thiết bị với hàm gọi hệ thống systemcall như open read, write , ioctl thông qua file_operations.

các thành phần chính của nó : 
    
    Kobject : đối tượng quản lý. 
    const struct file_opeartions *ops trỏ đến bảng hàm thao tác trên file
    dev_t dev : lưu Mijor minor.
    count : số lượng thiết bị quản lý

Example 
```c
#include <linux/module.h> 
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/cdev.h>

struct __MDEV{
    struct class *m_class;
    dev_t m_dev;
    struct cdev m_cdev;
}mdev_t;

/*Function prototype*/
static ssize_t m_read(struct file *flip, char __user *buf, size_t size, loff_t *offset );
static ssize_t m_write(struct file *flip, char __user *buf, size_t size, loff_t *offset );
static int m_open(struct inode *inode, struct file *flip);
static void m_close(struct inode *inode, struct file *flip);

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .read = m_read,
    .write = m_write,
    .open = m_open,
    .release = m_close
};
static int __init module_init(void){
    /*alloc region*/

    if (alloc_chrdev_region(&mdev_t.m_dev, 0,1,"m_dev") < 0){
        pr_err(" Alloc region failed\n");
    }

    /*create class*/
    mdev_t.m_class = class_create(THIS_MOUDLE,"class_dev");

    if(device_create(mdev_t.m_class,NULL, mdev_t.m_dev,NULL, "m_device") < 0){
        pr_err("error");
    }

    /*Create cdev struct*/
    cdev_init(&mdev_t.m_cdev,&fops);

    /*adding charracter device to the systerm*/
    cdev_add(&mdev_t.m_cdev,mdev_t.mdev, 1 );
}

```
</details>
<details>
<summary><h3>⏩ Sysfs<h3></summary>

Sysfs là gì : là 1 hệ thống tập tin ảo trong linux cung cấp giao diện giúp người dùng có thể truy cập và cấu hình các thông số của kernel thông qua hệ thống tập tin 
thường được gắn vào /sys nó thay thế /proc ở mục đích rỏ hơn ở thông tin hệ thống. 
sys tập trung vào thông tin phân cứng và kernel trong khi đó proc thì cung cấp tập trung vào thông tin tiến trình 

- Để tạo sysfs cần dùng kobject hoặc device_create_file() sau khi tạo sẽ xuất hiện entry bên trong /sys

- sysfs hổ trợ các thao tác độc ghi qua attribute có callback  show() để đọc hoặc strore() để ghi.

- ứng dụng thực tế quản lý thiết bị phần cứng mà không truy vấn trực tiếp đến kernel 

- Có thể thay đổi thông số kernel thông qua cách ghi data mà không cần reboot 

- nó có ảnh hưởng đến hiệu suất hệ thống nhưng không đáng kể vì nó lưu thông tin kernel ở dạng file text đơn giản. nếu 1 driver ghi vào file sys ở tốc độ cao nó có thể gây quá tải I/O.

- rủi ro khi dùng sysfs như : ghi nhầm thông tin phần cứng. Lộ thông tin phần cứng. cần đặt quyền truy cập đúng để tránh những thay đổi không mong muốn. 


</details>

<details>
<summary><h3>⏩ device-tree <h3></summary>

- Device tree là một file mô tả phần cứng ở dạng cấu trúc cây, mỗi device là 1 node mỗi node sẽ mang các thuộc tính và các thuộc tính có thể được mang dữ liệu hoặc để tróng.

- Vai trò của device tree : giúp hệ điều hành hiểu và quản lý phần cứng không sửa kernel. 
- Cấu trúc là dạng cây : với các device là các node, mỗi node có các thuộc tính và con của nó có thể là node khác. 
- Hoạt động : khi khởi động kernel sẽ đọc device tree để nhận diện phần cứng.
- Khai báo : thường được viết theo ngôn ngữ DTS(device tree source) và biên dịch thành DTB để kernel dùng. 
- ứng dungpj phổ biến trên các hệ thống linux chạy trên kiến trúc ARM đăcj biệt thiết bị nhúng.

cấu trúc device tree : 

kiểu dữ liệu số nguyên 32 bit đặt trong dấu <>
string trong dấu "".
boolean là 1 thuộc tính trống nếu khai báo trong device tree tức là nó true. không thì nó mặc địa false.

-> quy ước đặt tên : <name>[@address]{propertive} name lên đến 31 ký tự . address chỉ được dùng để truy cập vào node có thể không khai báo luôn. 

ALias, lable, pHandle

    aliases {
    ethernet0 = &fec;
    gpio0 = &gpio1;
    gpio1 = &gpio2;
    mmc0 = &usdhc1;
    [...]
    };
    gpio1: gpio@0209c000 {
        compatible = "fsl,imx6q-gpio", "fsl,imx35-gpio";
        [...]
    };
    node_label: nodename@reg {
        [...];
        gpios = <&gpio1 7 GPIO_ACTIVE_HIGH>;
    };

lable là cách để định danh 1 node bằng 1 cái tên duy nhất thực tế tên này được chuyển thành 1 giá trị 32bit ở DT compiler. ở ví dụ trên thì gpio1 và node_label là lable. 

Phandle là 1 giá trị 32bit liên kết với node. Và được sử dụng để định danh 1 node để có thể tham chiếu đến node dó từ thuộc tính của node khác. bằng cách sử dụng <&gpio1> ta có thể trỏ đến 1 node có tên là lable là gpio1

Để kernel có thể kiểm soát hể cả cây tìm 1 node thì khái niệm alias ra đời . Alias không được dùng trực tiếp tròn DT nhưng nó sẽ được kernel dùng. Ta có thể dùng hàm find_node_by_alias() để tìm đến 1 node 

lưu ý nến không định danh phandle ở node muốn trỏ tới thì phải dùng lable hoặc alias để dùng phandle tham chiếu đến nếu muốn gọi node từ node kahcs

vd khong dùng lable tham chiếu phải định danh phandle là số nguyên ở node muốn dùng làm tham chiếu 

    gpio@0209c000 {
        compatible = "fsl,imx6q-gpio";
        phandle = <0x1>;  // Định danh node bằng phandle
    };

    led {
        gpios = <&0x1 7 GPIO_ACTIVE_HIGH>;
    };





</details>

<details>
<summary><h3>⏩ U-boot <h3></summary>

- là 1 bootloader mã nguồn mở sử dụng rộng rải trong embedded linux để khởi động hệ thống và tải kernel vào bộ nhớ. U-boot hỗ trợ nhiều kiến trúc phần cứng khác nhau từ ARM, x86, đến powerPC. U-bôot giúp nhà phát triển thiết lập hệ thống ban đầu và chuẩn bị môi trường để kernel hoạt động. 

- các giai đoạn trong quá trình của u-boot gòm :
    - giai đoạn rom code mã rom đươc nhà phát triển nạp sẵn vào flash để tiềm kiếm bộ nhớ ngoài để tải và thực thi giai đoạn SPL
    - SPL (seconds program loader) : Là 1 chương trình nhỏ của rom code.(thường nó được load và chạy file MLO) dùng để khởi tạo DRAM và tải TPL hoặc load thẳng u-bool đầy đủ. 
    - TPL (thirt program loader) : thường chỉ xuất hiện trên các hệ thống phức tapj dùng để thực hiện các khởi tạo bổ sung trước khi u-boot được tải.
    - Giai đoạn U-boot : U-boot đầy đủ được tải vào bộ nhớ, cho phép người dùng thực thi tải kernel và hệ thống file root  

Cấu trúc u-boot : 
    MLO/Image
    tệp uEnv.txt : tùy chỉnh các hành vi của u-boot như viết script để thực thi các hành vi boot 
    

Các lệnh thường dùng trong U-boot

    bdinfo : xem thông tin hệ thống phần cứng hiện tại 
    printenv: in ra tất cả các biến môi trường hiện đang lưu trong u-boot 
        loadaddr : địa chỉ load kernel 
        fdtaddr : địa chỉ device tree
        bootcmd : thiết bị boot
        in ra 1 biến cụ thể printenv <name>

    các lệnh liên quan : 
        setenv : đặt sửa 1 biến môi trường
        saveenv : lưu lại 

    mmc list : kiểm tra các thiết bị mmc (sd card, emmc)

    lệnh load kernel vào vùng địa chỉ 
    step 1 chọn ổ sd card hoặc emmc : mmc dev 0 
    step 2 load kernel từ file zImage được lưu /boot/,, : 
        load <mmc> <loại mmc : partinsion> <address on ram> <file path image>
        vd : load mmc 0:1 ${loadaddr} /boot/zImage
    step 3 load devietree
        trương tự như load kernel 
    step 4 dùng lệnh boot để boot và
        bootz : zImage
        bootm : fitImage, uImage
        booti : arm4 Image
    
</details>

<details>
<summary><h3>⏩ Cross compiler<h3></summary>

- Cross compiler là gì : là quá trình biên dịch mã nguồn trên một máy tính có kiến trúc khác với thiết bị mục tiêu. Thường được thực hiện trên các máy có cấu hình mạnh để tạo ra các tệp thực thi chạy trên các kiến trúc nhỏ gọn có cấu hình không mạnh để tối ưu thời gian build. 

- Tại sao lại dùng cross compiler : 

    - tiết kiệm tài nguyên : thiết bị nhúng thường có phần cứng hạn chế không đủ để biên dịch mã nguồn.
    - tăng tốc độ phát triễn : Máy phát triển có cấu hình mạnh giúp biên dịch nhanh chống hơn so với thiết bị nhúng.
    - linh hoạt : Hỗ trợ nhiều kiến trúc phần cứng, từ ARM, x86 ... 

- toolchain là 1 công cụ bao gồm trình biên dịch(compiler), trình liên kết (linker), và 1 số côn cụ khác , một số toolchain phổ biến như :
    Linaro toolchain : 1 tỏng những toolchain phát triển kiến trúc ARM
    GCC : được sử dụng rộng rãi phát triển nhúng. 

- Thách thức khi làm việc với Cross compiler : 
    - cấu hình phức tạp : việc thiết lập toolchain đồi hỏi hiểu biết sâu
    - Đảm bảo toolchain tương thích với thiết bị mục tiêu
 
</details>

</details>

<details>
<summary><h2>C question interview <h2></summary>

<details>
<summary><h3> Quá trình Preprocessing có diễn ra đối với assambly code hay không?<h3></summary> 

- Trả lời cho câu hỏi này là vừa có vừa không. 

- có khi phụ thuộc vào toolchain và phần mở rộng của file > Ví dụ trong GCC hoặc ARM clang nếu file assembly đuocwj lưu dưới dạng .S thì trình biên dịch sẽ gửi file qua tiền xử lý như ngôn ngữ C và ta có thể sử dụng các chỉ thị xử lý như #include #define trong mã ngược lại.
- Không khi được lưu dưới dạng .s thì quá trình preprocessing sẽ không diễn ra và mã được gửi thẳng đến assembler để biên dịch ra mã máy. 

</details>
<details>
<summary><h3> Macro bitwase <h3></summary> 

- AND
```c
    0100
    0111
    ----
    0100
```

- OR
```c
    0100
    0111
    ----
    0111
```

- XOR
```c
    0100
    0111
    ----
    0011
```




- Swap dibbles bye:

```c
#define     SWAP_DIBBLES_BYTE(data)     (((data & 0x0F)<<4) | ((data & 0xF0)>>4))
```

- Swap Two byte

```c
#define     SWAP_TWO_BYTE(data)     (((data & 0x00FF)<<8) | ((data & 0xFF00)>>8))
```

-Swap Tow number dont use temp 

```c
#define     SWAP_TWO_NUM(a,b)       (a ^= b ^= a ^= b)

// Explain :  a ^ a = 0
    a = a^b 
    b = b^a = b ^ (a^b) => b = a
    a = a ^ b = a ^ (b ^ a) => a = b
```


</details>

<details>
<summary><h3> Startup code là gì  <h3></summary> 

- Là 1 một khối nhỏ thường được viết bằng asm chuẩn bị cho code phần mềm được viết bằng ngôn ngữ cao hơn như C/C++. Nó dùng đễ setup data memory. Nó cũng khởi tạo bằng không cho một phần dữ liệu chưa được khởi tạo khi nạp chương trình. 

- Follow theo các bước : 
    Disable all interrupt.
    Copy bất kỳ các dât được khởi tạo từ rom to ram 
    Set = 0 cho các dâta không được khởi tạo
    Bật interrupt 
    cài đặt process stask pointer
    cài đặt vùng Heap
    (c++) thực thi các constructor and cài đặt all global variable
    call main() function
</details>
<details>
<summary><h3> Buffer overFlown  <h3></summary> 

What is Buffer :
    Bạn có thể hiểu buffer là một "khu vực có giới hạn" trong bộ nhớ, nơi các biến của chương trình có quyền truy cập. Nếu chương trình truy cập vượt ngoài ranh giới của buffer (gọi là buffer overflow), có thể gây ra lỗi hoặc bị khai thác bởi hacker.

Khi overflown chương trình có thể bị crash hoặc gây ra các hành vi không mông muốn. và kẻ tấn công có thể tấn công là chương trình lỗi làm hongt dữ liệu hoặc đánh cấp dữ liệu liên tư.


</details>
<details>
<summary><h3> Callback funtion  <h3></summary> 

Callback là gì : Callback về cơ bản là bất kỳ mã thực thi nào được chuyển làm đối số cho mã thực thi khác. Mã đó dự kiến sẽ gọi hoặc thực thi đối số đó tại 1 thời điểm nó được gọi. 
Vd : trong cơ bản nếu tham chiếu của hàm đucợ chuyển sang hàm khác là đối số để gọi thì nó được gọi là callback. Trogn C thì hàm callback được gọi thông qua con tro hàm (function pointer)
tuân thủ các bước : 
 - Callback function
 - A callback registration
 - Callback excution

</details>

<details>
<summary><h3> Watch dog timer là gì <h3></summary> 

- là 1 thành phần phần cứng hoặt phần mềm được thiết kế để phát hiện và khôi phục hệ thống khỏi các sự cố hoặc lỗi hoạt động.

- cách nó hoạt động : 
    khởi tạo thời gian chờ : đây là khoảng thời gian tối đa mà hệ thống hoạt động k cần báo lại cho Watchdog
    Feeding the watchdog : có thể hiểu là trong quá trình hoạt độn phần mềm sẽ liên tục định kỳ cung cấp cho watchdog timer không bị kéo về 0
    Phát hiện time out : nếu như vì lý do gì đó mà chương trình k cung cấp cho watch dog và thời gian của watch dog timer về 0 thì gây ra sự kiện time out.
    Khi xảy ra timeout sẽ kích hoạt hành động phục hồi hệ thống. thường thì reset cả chương trình ở các hệ thống phúc tạp hơn thì kích hoạt ngắt để phần mềm cố gắng khôi phục lỗi trc khi reset. 

Lợi ích : tăng độ tin cậy và ổn định. Ngăn chặn hệ thống treo. tự động phục hồi lỗi, an toàn

</details>

<details>
<summary><h3> Read modify write technique là gì <h3></summary> 
- Khi làm việc với các thanh ghi phần cứng việc ghi vào chúng có thể ảnh hưởng đến nhieuf bit khác nhau. mục tiêu của RMW là chỉ thay đổi các bít mà chúng ta muốn giữ nguyên các giá trị còn lại 

các bước : 
    - đọc giá trị hiện tại cảu thanh ghi phần cứng vào 1 biến tạm . 
    - sửa đổi dùng các phép logic để sửa đổi những bít mà ta muốn thay đổi tại biến tạm .
    - ghi giá trị của biêns tạm đã đucợ sửa đổi vào thanh ghi phần cứng.

</details>


<details>
<summary><h3> LCall and ACALL <h3></summary> 

- LÀ 1 instruction trong tập lệnh của 8051 được thực hiện một long call đến 1 subroutine(chương trình con) ở bất kỳ vị trí nào của chương trình.

- Hoạt động của nó : 
    1 Opcode : lệnh có 1 mã hoạt động cụ thể là 0x12
    2 toán hạng(operand) : theo sau opcode là 1 địa chỉ 16bit(2byte) chỉ định địa chỉ của 1 subroutine mà bạn muốn gọi. 

    Hoạt động :
        Đầu tiên con trỏ PC sẽ tăng thêm 3 đến vị trí instruction theo sau của LCALL.
        Lưu giá trị của con trỏ PC vào stack. 
        Nạp địa chỉ hay là giá trị của oprand Lcall vào con trỏ PC.
        Chuyển quyền điều khiển MCU sẽ bắt đầu thực thi các instruction từ địa chỉ mới 
        Sau khi thực hiện xong Lệnh RET sẽ lấy địa chỉ trả về từ stack đã lưu và nạp lại vào con trỏ PC sau đó chương trình sẽ thực thi ngay dưới lệnh LCALL

Khác biệt với ACALL ở chổ : ACALL chỉ có thể có 1 byte toán hạng nên khi gọi chỉ gọi chương trình con trong cùng 1 trang (2kb) hay trang kế.

</details>

<details>
<summary><h3> LCall and ACALL <h3></summary> 

- Virtual memory ( bộ nhớ ảo ) là 1 kỹ thuật quản lý bộ nhớ sử dụng bởi hệ điều hành để cấp cho mỗi tiến trình một không gian bộ nhớ ảo riêng biệt. Không gian bộ nhớ này độc lập với Ram của hệ thồng. 
- Trong các hệ thống nhúng phức tạp (các hệ điều hành thời gian thực như RTOS hoặc các hệ điều hành đa nhiệm như Linux) nó được dùng cho các mục đích sau : 

1. Mở rộng không gian địa chỉ : Các hệ thống nhúng có thể có bộ nhớ vật lý hạn chế. VirMemory cho phép các tiến trình có không gian địa chỉ lớn hơn nhiều so với Ram thực tế. Điều này đạt được bằng cách sử dụng 1 phần bộ nhớ thứ cấp như (flash memory hay 1 bộ nhớ khác) làm bộ đêmj cho ram. 
2. Bảo vệ bộ nhớ : Mỗi tiến trình có 1 vùng nhớ ảo riêng biệt nên ngăn ngừa được việc ghi đè lên nhau. 
3. Quản lý đơn giản hơn : mỗi tiến trình làm việc với 1 không gian địa chỉ liên tục k cần lo về vị trí thực tết trên RAM. 

Tuy nhiêu có các thách thức khi dùng virtual memory. 
1. Hiệu suất : hoán đổi giữa RAM và bộ nhớ thứ cấp gây độ trễ đáng kể 
2. Độ phức tạp của hệ điều hành: 
3. chi phí bộ nhớ có thể chiếm 1 bộ nhớ nhất định. 

ứng dụng trong nhúng 
1. chạy các hệ điều hành đa nhiệm hoặc các RTOS tiến trình 
2. có nhu cầu bảo vệ bộ nhớ mạnh mẽ giữa các tiến trình 
3. có bộ nhớ thứ cấp đủ cho việc swapping
 


</details>

<details>
<summary><h3> Interrupt latency là gì và tại sao phải giảm nó <h3></summary> 
- Là độ trễ ngắt là khoảng thời hian từ khi thiết bị phần cứng gửi tín hiệu ngắt đến CPU để thực hiện ngắt tương ứng. Nói đơn giản nó là thời gian chờ đợi của CPU trước khi nó phản ứng với 1 sự kiện phần cứng quan trọng. 

- Tại sao chúng ta phải giảm interrupt latence ? : nó rất quan trọng nhất là nó ảnh hưởng đến hiệu suất và tính ổn định của chương trình.

- Các phương pháp giảm interrupt latency : Thiết kế trình xử lý ngắt đơn giản và hiểu quả : 
    
    Phần mềm: 
    Ngắn gọn và nhanh chóng, tránh các hàm gây blocking trong ISRs, dùng các Flag hay queu hàng đợi trong ISRs để giao tiếp giữa task và ISRs, Quản lý ưu tiên ngắt,Phân tích thời ian thực, tối ứu hóa trình biên dịch.

    Phần cứng : 
    Chọn bộ microcontrolor phù hợp : kiến trúc, số lượng và mức độ ngắt, tốc độ xung nhiệp, bộ nhớ cache.
    Thiết kế hệ thống bus hiệu quả. 

    Vd dụ cụ thể : ngắt từ bộ mã hóa encoder có thể xảy ra với tần suất rất cao. Đễ giảm dộ trễ, ISR cho encoder nên chỉ độc giá trị bộ đếm và có thể gửi nó vào 1 hàng đợi một tác vụ khác có mức dộ ưu tiên cao hơn sẽ đọc giá trị từ hàng đợi đó để thực hiện các tính toán điều khiển.  
</details>

<details>
<summary><h3> Các hành động mà startup code thực hiện <h3></summary> 
    - Khởi tạo stack pointer 
    - Thiết lập program counter() và nhảy đến Reset handler. 
    - sao chep data đã khởi tạo từ flash sang ram (.datasection)
    - Khởi tạo vunhf nhớ chưa khởi tạo (.bss section) về không, 
    - trước khi gọi hàm main() khởi tạo c runtime thiết lập các thư viện chuẩn của C, c++ thì có thêm phần khởi tạo các đối tượng tĩnh C++. 
    - gọi main
</details>

<details>
<summary><h3> Giải thích quá trình boot của microconllor <h3></summary> 

- Giai đoạn 1 : Cấp nguồn và reset : 
    cấp nguồn : các mạch điện bên trong bắt đầu hoạt động. Điện áp ổn định được thiết lập cho các thành phần khác nhau của chip.
    Reset : Hầu hết các thanh ghi của CPU và các ngoại vi đều được đặt về giá trị mặc định của nsx, Program counter thường đucợ đặc về vị trí bắt đầu của Flash. 

- Giai đoạn 2 : thực thi statup code . Start up code được lưu ở vị trí đầu tiên của flash (vector table chỉ dducocwj khai bảo tại startup code linker sẽ đặt section chứa định nghĩa này vào đúng vị trí bắt đầu của bộ nhớ Flash.)

- Giai đoạn cuối thực thi chương trình ứng dụng. 

các yếu tố ảnh hưởng đến quá trình này : kiến trúc vi điều khiển. Cấu hình cỉa Fuse/Option Bytes. Nếu có Blootloader thì quá trình này có thể sẽ phức tạp hơn. VÌ sao khi reset sẽ gọi bootload trước để bootloader thông báo cho vdk biết vị trí cỉa các ứng dụng = cách cấu hình VTOR. Startup code sẽ chạy tại địa chỉ mà bootloader chuyển giao. 


</details>
<details>
<summary><h3> Chương trình thực thi Bit by Bit or Byte By Byte bằng cách nào<h3></summary> 
- Đầu tiên CPU sẽ không thực theo từng bit một cách riêng lẻ mà tùy vào kiến trúc CPU và loại lệnh. 
Quá trình thực thi được chia thành các giai đoạn chính : 
1. Tìm và nạp Lệnh (Fetch) : CPU lấy lệnh tiếp theo từ bộ nhớ 
2. Giải mã lệnh (Decoder) : Xác định phân tích loaị hoạt động cần thực hiện 
3. Thực thi lệnh : Ở giai đoan này dữ liệu có thể được xử lý ở mức độ bit hoặc byte tùy thuộc vào loại lệnh và kichs thước của toán hạng. 
4. GHi kết quả: Quá trình ghi cũng diễn ra theo byte hoặc nhiều byte tương ứng kích thước kiểu dữ liệu


</details>

<details>
<summary><h3> Khác nhau giữa bit rate và baudrate <h3></summary> 

- bit rate (tốc độ bit) : là số lượng bit dữ liệu truyền đi trong  1 đơn vị thời gian cụ thể. Vd kbs(kilobit / giây)
- baudrate  (tốc độ baud) : số lượng thay đổi tín hiệu trong 1 đơn vị thời gian cụ thể. Baudrate cho biết tần suất tín hiệu vật lý thay đổi trạng thái (vd tần số, điện áp, pha) 
    Vd 9600 baud có nghĩa là tín hiệu thay đổi 9600 lần trên s. 
-> trường hợp giống nhau khi mỗi tín hiệu(symbol) chỉ mang 1 bit thì bit rate = baudrate
-> Khác nhau khi mỗi thay đổi tín hiệu (symbol) mang nhiều bit  

</details>

<details>
<summary><h3> 1 vài câu hỏi mẹo <h3></summary> 
- Malloc(0) trả về gì ?

    trả về 1 con trỏ null hoặc 0 hoặc 1 con trỏ hợp lệ nhưng không được ghi vào vì hành vi đó là hành vi không xác định gây rò rỉ bộ nhớ. con trỏ này cần được giải phóng để tránh rò rỉ bộ nhớ.

- Lấy vị trí của 1 trường field trong 1 byte ?
    
    step 1 tạo func chứ arg trường nhập vào, vị trí bắt đầu, độ dài trường muốn lấy 
    step 2 tạo bit mask của trường feild nhầm mục đích che đi các bit không cần thiết 
    step 3 and với bit mask và dịch về đầu để tạo nên kết quả cuối

```c
uint32_t getFieldValue(byte_t dataByte, uint8_t startBit, uint8_t fieldLength) {
    // Kiểm tra tính hợp lệ của tham số
    if (startBit > 7 || (startBit + fieldLength) > 8 || fieldLength == 0) {
        // Các tham số không hợp lệ
        return -1; // Hoặc một giá trị lỗi khác tùy bạn định nghĩa
    }

    // Tạo một mask để lấy các bit của trường
    uint8_t mask = ((1 << fieldLength) - 1) << startBit;

    // Áp dụng mask và dịch bit để lấy giá trị của trường
    uint32_t fieldValue = (dataByte & mask) >> startBit;

    return fieldValue;
}
```
- Khai báo 1 hằng số trả về số giây trong một năm bằng bộ tiền xử lý ?
    #define SECONDS_IN_YEAR (60U * 60U * 24U * 365U)

- Đếm số lượng bit được set của 1 số 

    
</details>

</details>



<details>
<summary><h2> Unix Shell Script<h2></summary>

<details>
<summary><h3> Operators in shell<h3></summary>

## Arithmetic Operator ##

a = 10
b = 20

| Operators | Description | Example |
|:----------|:-----------|:---------|
| &plus | Add values on ether side of operator | 'expr $a &plus; $b' give me 30 |
| -(Subtraction) | Subtracts right hand operand from left hand operand | 'expr $a - $b' give me -10 |
| *(mulptilication) | Mulptilies value on either side on operator | 'expr $a * $b' give me 200 |
| /(division) | Divides left hand operand by right hand operand | 'expr $b / $a' give me 2 |
| %(Modulus) | Divides left hand operand by right hand operand and returns remainder | expr $b / $a' give me 0 |
| =(Assignment) | Assigns right operand in left operand | a = $b would assign value of b into a|
| == (Equality) | Compares two numbers, if both are same then returns true. | [ $a == $b ] would return false.|
| != (Not Equality) |Compares two numbers, if both are different then returns true. |[ $a != $b ] would return true.|

## Relational Operator ##
a = 10
b = 20 
| Operators | Description | Example |
|:----------|:-----------|:---------|
|-eq| Check if the value of two operand are equal or not, if 2 value are equal return true| [ $a -eq $b ] return is not true |
|-ne| if 2 value are NOT equal return true | [ $a -ne $b ] return is true |
|-gt| if right operand greater left operand return true | [ $a -gt $b ] return is not true |
|-ge| if right operand greater or equal left operand return true |  [ $a -gt $b ] return is not true |
|-lt| if right operand less than left operand return true | [ $a -gt $b ] return is true |
|-le| if right operand less than or equal left operand return true | [ $a -gt $b ] return is true |

## Boolean Operator ##

a=10 
b=20
| Operators | Description | Example |
|:----------|:-----------|:---------|
|-!| this invert a true condition into false and vice versa| [ !true ] return false|
|-o| this is OR logical| [ $a -lt 20 -o $b -gt 100 ] is true|
|-a| this is AND logical| [ $a -lt 20 -a $b -gt 100 ] is false.|

## String operator ##

a="abc"
b="edf"
| Operators | Description | Example |
|:----------|:-----------|:---------|
|=| check if value of two operands are equal or not,if Yes return true| [ &a = &b ] return false|
|!=| check if value of two operands are equal or not,if Yes return false| [&a != &b ] return true | 
|-z| check size operand zero or not, if zero return true | [ -z $a ] is not true|
|-n| check size non zero, if zero return false| [ -n $a ] is true|
|str| check str is not empty, if it empty return false| [ $a ] is true|

## File operator##

Syntax [ Operator $file]

| Operators | Description |
|:----------|:----------- |
|-b| Check if file is block special file return true|
|-c| ---------------- Charactor device file|
|-d| ---------------- Director file|
|-f| ---------------- an ordianry file as opposed to a directory or special file|
|-e| ---------------- is exists |
</details>

<details>
<summary><h3> Loop in shell <h3></summary>

## While loop 

syntax 

    while [command] 
    do 
        /* Statement to be executed if commnad true */
    done

## For loop 

sysntax 

    for var in word1 word2 ..... wordn
    do 
        Statement to be executed for every word.  
    done 

## untill loop 

Syntax 

    untill [command] 
        Statement to be excuted untill to command is true
    done

## The select loop

syntax 

    select var in word1 word2 ... wordn
    do 
        command
    done 

    select variable: Khai báo một biến (variable) sẽ lưu trữ giá trị (từ word1 đến wordN) mà người dùng chọn.
    in word1 word2 ... wordN: Đây là danh sách các tùy chọn sẽ được hiển thị trong menu. Mỗi word sẽ trở thành một mục trong menu, được đánh số tuần tự bắt đầu từ 1.
    do: Bắt đầu khối lệnh sẽ được thực thi sau khi người dùng chọn một tùy chọn.
    commands: Các lệnh được thực thi trong mỗi lần lặp của vòng lặp. Bên trong khối lệnh này, biến variable sẽ chứa giá trị của tùy chọn mà người dùng đã chọn. Biến đặc biệt $REPLY sẽ chứa số thứ tự mà người dùng đã nhập.
    done: Kết thúc vòng lặp select.

</details>

<details>
<summary><h3> Substitution <h3></summary>

Là quá trình thay thế các cấu trúc đặc biệt (biến lệnh biểu thức số học mẫu chuỗi ) bằng kết quả hoặc giá trị tương ứng của chúng trước khi lệnh thực thi.

Example : 

    #!/bin/sh

    DATE='date'
    echo "Date is $DATE"

Variable Substitution 

|Sr.No|Form & Description|
|:----|:-----------------|
|1|${VAR} Substitute the value of VAR|
|2|${VAR:-WORD} If var is null or unset, WORD is substitute for var, The value of VAR do not change|
|3|${VAR:+WORD} If var is set, WORD is substitue, The value of VAR do not change |
|4|${VAR:=WORD} If var is null or unset, var is set to the value of word|
|5|${VAR:?MESSAGE}If var is null or unset, message is printed to standard error. This checks that variables are set correctly.|

</details> 

<details>
<summary><h3> Quoting Mechanism <h3></summary>
là 1 cơ chế trích dẫn trong Shell giúp shell loại bỏ hoặc ngăn chặn việc shell diễn giair các ký tự đặt biệt. điều này giúp truyền 1 ký tự nguyên văn đến lệnh hoặc chưowng trình đang chạy. 

1. Dấu nháy đơn '

Bất ký ký tự nào bên trong dấu nháy đơn được xem là 1 chuổi và không thể thực thi hay thay thế xảy ra trong dấu này. 

    echo 'khoi $date' => output: khoi $date

2. Dấu nháy kép "

- Cho phép thực hiện 1 số loại thay thế Shell vẫn thực hiện variable substitution, command substitution và arithmetic expansion
- ngăn chặn word spliting và pathname : giữ khoảng trắng bên trong ngăn chặn mở rộng ký tự như *, ? [...] trong file list .

    name="Nguyen Van A"
    echo "Xin chao $name"   # Output: Xin chao Nguyen Van A (biến được thay thế)
    echo "The current date is $(date)" # Output: The current date is Fri May 16 11:38:00 +07 2025 (lệnh được thực thi)
    echo "1 + 1 = $((1 + 1))" # Output: 1 + 1 = 2 (phép toán được thực hiện)
    echo "List files matching *.txt: *.txt" # Output: List files matching *.txt: *.txt (không mở rộng thành danh sách file)

    message="Hello   world"
    echo "$message"         # Output: Hello   world (giữ nguyên khoảng trắng)
    echo $message          # Output: Hello world (word splitting xảy ra)
3. dấu / 

loại bỏ ý nghĩa của 1 ký tự đặt biệt 

    echo "This string contains a \$ dollar sign." # Output: This string contains a $ dollar sign.
    echo 'This string contains a \' single quote.' # Output: This string contains a ' single quote.
    echo "This string has a backslash: \\" # Output: This string has a backslash: \
    echo "Hello\ world"   # Output: Hello world (khoảng trắng được giữ nguyên trong trường hợp này)

</details>

<details>
<summary><h3> IO redirection<h3></summary>

chuyển hướng dữ liệu
'>' ghi và thay thế dữ liệu mới lên dữ liệu cũ.
'>>' ghi và thay thế 

example 

    khoi@vnpt:~$ who
    khoi     tty7         2025-05-17 09:35 (:0)
    khoi     pts/0        2025-05-17 09:35 (:0)
    khoi     pts/2        2025-05-17 10:49 (:0)
    khoi@vnpt:~$ who > users
    khoi@vnpt:~$ cat users
    khoi     tty7         2025-05-17 09:35 (:0)
    khoi     pts/0        2025-05-17 09:35 (:0)
    khoi     pts/2        2025-05-17 10:49 (:0)
    khoi@vnpt:~$ 

Who => xem các đăng nhập vào mạng và chuyển hướng đầu ra cho file users khi xem file users sẽ lưu các dữ liệu đã chuyển hướng vào. 

Syntax 

    command <redirection> file 

</details>

<details>
<summary><h3> Function in shell <h3></summary>

syntax 

    #!/bin/sh

    # define your func here 
    hello (){
        echo "Hello world"
    }
    #invoke your function
    hello

output 

    ./test.sh
    Hello world

## pass parameter to function ##

    #!/bin/sh

    # define your func here 
    hello (){
        echo "Hello world $1 $2"
    }
    #invoke your function
    hello

output 

    ./test.sh khoi nguyen
    Hello world khoi nguyen

## returning value of function ##

    #!/bin/sh

    # define your func here 
    hello (){
        echo "Hello world "
        return 10
    }
    #invoke your function
    hello

    # chụp lại giá trị sau khi gọi hàm
    ret=$?
    echo " Value is $ret"

Output : 

    $./test.sh
    Hello World
    Value is 10

## Nested Functions ##

    #!/bin/sh

    # Calling one function from another
    number_one () {
    echo "This is the first function speaking..."
    number_two
    }

    number_two () {
    echo "This is now the second function speaking..."
    }

    # Calling function one.
    number_one

output:

    ./test.sh
    This is the first function speaking...
    This is now the second function speaking...

note : bạn có thể viết nó trong .profile và khi login vào có thể cùng các Func mà bạn đã tạo 
   
</details>

</details>


