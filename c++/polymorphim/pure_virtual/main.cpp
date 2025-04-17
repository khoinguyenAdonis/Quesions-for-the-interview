#include <iostream>

// pure virtual func  delare classes abstrast. In the fact . it's useful to design software flexible and extend 
/*Tạo giao diện chung: Trong các hệ thống lớn, việc có một giao diện chung để đảm bảo các lớp con thực hiện đúng các hành vi được yêu cầu là rất quan trọng. 
Ví dụ, trong một ứng dụng xử lý đồ họa, bạn có thể có lớp trừu tượng Shape với hàm thuần ảo Draw(). 
Các lớp con như Circle, Rectangle sẽ định nghĩa chi tiết cách vẽ hình tương ứng.
* Áp dụng nguyên tắc "Open/Closed": Hàm thuần ảo giúp hệ thống dễ mở rộng mà không cần sửa đổi lớp gốc. Khi cần thêm một chức năng mới, 
bạn chỉ cần tạo lớp con và triển khai các hàm thuần ảo.
* Đảm bảo tính đa hình (Polymorphism): Sử dụng hàm thuần ảo cho phép gọi các phương thức của đối tượng cụ thể thông qua con trỏ hoặc tham chiếu đến lớp cơ sở. 
Điều này rất hữu ích khi xử lý các đối tượng khác nhau trong cùng một tập hợp.
* Tách biệt logic và triển khai cụ thể: Trong các dự án lớn, nhóm thiết kế có thể tạo các lớp trừu tượng với hàm thuần ảo, 
còn nhóm lập trình triển khai có thể định nghĩa chi tiết sau đó. Điều này thúc đẩy việc phân chia công việc hiệu quả hơn.*/

class shape{
    public :
    virtual void draw() = 0;

    virtual ~shape(){};
};

class cirle : public shape {
    public : 
    virtual void draw(){
        std::cout << " draw the circle" <<std::endl;
    } 

    virtual ~cirle(){};

};

class rectangle : public shape {
    public : 
    virtual void draw(){
        std::cout << " draw the rectangle" <<std::endl;
    } 
    virtual ~rectangle(){};

};
// có nghĩa là mình cứ viết các hàm mở rộng mà không cần sữa lớp cơ sở ở đây là shape và khi dùng lớp cơ sở
// trỏ đến các lớp khác có thể gọi đúng ra chức năng overrideoverride
/*
*Abstract class đóng vai trò như một interface don't provide anything triễn khai nào 
* Lớp Shape:

Đóng vai trò như một giao diện, chứa các phương thức thuần ảo (Draw()).

Không có bất kỳ thuộc tính hay phương thức nào đã được triển khai, 
tương tự như "interface" trong các ngôn ngữ khác.
Các lớp con Circle và Rectangle:

Thực hiện giao diện bằng cách định nghĩa phương thức Draw().
Sử dụng giao diện:
Trong hàm main, chúng ta làm việc với các đối tượng Circle và Rectangle thông qua con trỏ Shape*.
Điều này tạo sự linh hoạt, dễ dàng thay thế hoặc thêm các hình dạng mới mà không cần thay đổi mã nguồn của giao diện.
*/

int main(void)
{
    shape *shape[2];
    shape[0] = new cirle();
    shape[1] = new rectangle();

    shape[0]->draw();

    shape[1]->draw();
    
    return 0;
}
