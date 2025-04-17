#include <iostream>

/*Quyết định phương thức nào được gọi xảy ra tại thời gian chạy (runtime).

Thực hiện thông qua cơ chế virtual function và method overriding.

Yêu cầu một con trỏ hoặc tham chiếu kiểu lớp cơ sở để gọi phương thức của lớp con tại runtime.*/

// khai bao const thì hàm sẽ không bị override nếu muốn thì thêm const ovirride để chương trình biết là đc phép ghi overirride

using namespace std;
class base {
    public:
    virtual void say_hello(void) const{
        cout<< "this is base"<< endl;
    };
};

class delivered : public base{
    virtual void say_hello(void) const override {
        cout<< "this is delivered"<< endl;
    };
};

void greeting(base &obj){
    obj.say_hello();
}

int main (void){

    base *ptr;
    delivered obj2;

    ptr =&obj2;

    ptr->say_hello();

    greeting(obj2);

    return 0;
}

