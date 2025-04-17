#include <iostream>

// Đa hình tĩnh (Compile-time Polymorphism):

// Quyết định phương thức nào được gọi xảy ra tại thời gian biên dịch.

// Thực hiện thông qua method overloading (nạp chồng hàm) hoặc operator overloading (nạp chồng toán tử).

// Trong đoạn mã của bạn, say_hello() được gọi theo kiểu của biến (base hoặc delivered), do đó đây là dạng đa hình tĩnh.

// compiler sẽ quyết định phương thức naof được gọi thông qua class truyền vào greetinggreeting 

using namespace std;

class base{
    
    public :
        void say_hello() const {cout<<" This it base class"<<endl;};
    
};

class delivered : public base{
    public :
        void say_hello() const{
            cout << "This is deliverd class" << endl;
        }
};

void greeting(const base &obj){
    cout<< "greeting : ";
    obj.say_hello();
}

int main (void){
    base obj1;
    obj1.say_hello();

    delivered obj2;
    obj2.say_hello();

    greeting(obj1);
    greeting(obj2);

    return 0;
}