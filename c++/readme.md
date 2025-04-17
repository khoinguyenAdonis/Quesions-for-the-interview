## Các câu hỏi thường gặp khi phỏng vấn

### Class and object

**Tính đa hình là gì ?**
    
    Cho phép phương thức hay đối tươngj hoạt động theo nhiều cách khác nhau, tùy thuộc vào ngữ cảnh dùng.
    - Đa hình tại thời điểm biên dịch (Compiler time Polymorphism)
        * Được thực hiện thông qua nạp chồng hàm(Function overloding) và nạp chồng toán tử (operator overloading).
        Vd: 1 lớp có thể có nhiều phương thức cùng tên nhưng khác tham số truyền vào.
    - Đa hình tại thời điểm chạy (Runtime Polymorphism)
        * Được thực hiện thông qua ghi đè phương thức
        vd : 1 lớp con có thể ghi đè phương thức của lớp cha để thực hiện hành vi khác.


vd : Giã sử có 1 lớp Animal với phương thức makeSound(). các lớp con như DOG và CAT có thể ghi đè để phát ra âm thanh khác nhau.        
```c++
class Animal {
    public:
        virtual void makeSound(void){
            printf("some generic animal sound!!");
        }
};

class Dog : public Animal {
    public : 
        void makeSound(void) override {
            prinft("this is dog");
        }
};

    class Cat : public Animal {
    public : 
        void makeSound(void) override {
            prinft("this is cat");
        }
};
```

** Hàm ảo (virtual function) hoạt động như nào ?

    Là phương thức cơ sở được khai báo với từ khóa virtual. Khi gọi hàm thông qua con trỏ hoặc tham chiếu của lớp cơ sở sẽ thực thi phiên bản của lớp dẫn xuất thay vì lớp cơ sở.

    *Cách hoạt động 
        khai báo virtual ở lớp cơ sở.
        khi lớp dẫn xuất gọi hàm ghi đè nó sẽ thực thi đúng theo đối tượng gọi.
    *cơ chế bảng vtable
        Khi một đối tượng có it nhất 1 hàm ảo trình biên dịch sẽ tạo ra 1 bảng  virual table.
        Mỗi đối tượng của lớp sẽ có 1 con trỏ vptr đến vtable.
        Khi hảm ảo đc gọi. Con trỏ vptr sẽ tra cứu vtable để gọi đúng phiên bản của phương thức.

** Trù tượng hóa Abstraction là gì ?
    
    - Ẩn đi các chi tiêc không cần thiết chỉ thể hiện các thông tin quan trọng, để người dùng và DEV có thể làm việc hiệu quả hơn.
    
    * đơn giản hóa hệ thống tập trung vào các chức năng chính. 
    * tăng tính bảo trì và tái suẻ dụng mã.
    * giảm sự phức tạp.

Vd :
```c++
class car {
    public :
    virtual void detail() = 0; // tru
};

class Honda : public car{
    public : 
    void detail(){
        printf("This is Honda");
    }
}

int main(){
    car * my_car = new Hoda();
    my_car->detail();
    delete my_car;
}

Output : This is Honda
```

**Class và Object khác nhau như nào?**
    
    Class là khuôn mẫu để tạo ra các Object.
    Chứa thuộc tính (properties) và các phương thức (methods) để xác định hành vi của đồi tượng.
    Không chiến bộ nhớ cho đến khi object được tạo.

    Object là thể hiện cụ thể của class 
    Có giá trị riêng biệt cho các thuộc tính của nó.
    Chiếm bộ nhớ khi được tạo.

**Có thể tạo 1 class mà không có đối tượng không?**

    CÓ. 
    Có 1 số trường hợp phổ biến như 1 class tồn tại mà không có đối tượng . 
    ví dụ điển hình như Lớp Trừu Tượng (Abstract Class) chứa hàm thuần 
    ảo (pure virtual function). Được sử dụng làm lớp cha và các lớp con kế thừa nó
    để triễn khai các phương thưc.
    Lớp chứa toàn bộ các phương thức tĩnh (static method) thường được dùng để nhóm 
    các hàm tiện ích lại 

**Tại sao cần tạo constructor cho class**

    - Khởi tạo giá trị mặc định cho class. nếu không có thì các giá trị sẽ không 
    được khởi tạo đúng cách dẫn đến lỗi.
    - Đảm bảo tính nhất quán của đối tượng. Nếu không có thì dev phải tự tạo các
    thuộc tính thủ công dễ gây lỗi.
    - Tự động hóa quá trình khởi tạo, Vd như khi được tạo bằng new thì constructure
    sẽ tự động được gọi đơn giản hóa mã nguồn.
    - Hỗ trợ kế thừa. nếu lớp cha có constructure lớp con có thể gọi để tạo thuộc 
    tính chung.





