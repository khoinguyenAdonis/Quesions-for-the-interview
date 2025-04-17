#include <iostream>
#include <memory>

/* 1 * qquyền sở hữu 
* ----> một đối tượng chỉ được sở hữu bởi 1 unique pointer. nếu muốn chuyển quyền sở hữu phải dùng phương thức std :: move 
* ----> tự động giải phóng bộ nhớ nhờ cơ chế RAII (Resource Acquisition Is Initialization). khi đối tượng ra khổi cope sẽ 
* tự động giải phóng bộ nhớ 
* ----> không cho sao chép unique pointer để tránh nhiều con trỏ quán lý cùng 1 tài nguyên. Điều này giúp quản lý bộ nhớ tự động 
* và ngăn chặn rò rỉ bộ nhớ (memory leak).
*/

class base{
    private :
        int data;
    public : 
        base(int a) : data(a){}
        void setdata(int a){
            data = a;
        }
        void display(){
            std::cout<< " data is : "<< data<< std::endl;
        }
};

int main(void){
    
    std::unique_ptr<base> ptr = std::make_unique<base> (20);
    ptr->display();
    
    ptr->setdata(12);

    ptr->display();
    
}