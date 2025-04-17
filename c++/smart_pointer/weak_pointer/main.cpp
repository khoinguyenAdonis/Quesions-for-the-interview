
#include <iostream>
#include <memory>

/*khong dung weak cac destructor khong duoc goi*/
class B; // Khai báo trước

class A {
public:
    std::shared_ptr<B> b_ptr; // Shared pointer đến B
    ~A() { std::cout << "Destructor of A is called\n"; }
};

class B {
public:
    std::shared_ptr<A> a_ptr; // Weak pointer đến A
    ~B() { std::cout << "Destructor of B is called\n"; }
};

int main() {
    
    {
        auto a = std::make_shared<A>();
        auto b = std::make_shared<B>();

        a->b_ptr = b; // A giữ shared_ptr đến B
        b->a_ptr = a; // B giữ weak_ptr đến A
    }
    // Khi ra khỏi phạm vi, cả A và B đều được giải phóng an toàn
    return 0;
}
