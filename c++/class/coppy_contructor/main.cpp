#include <iostream>

class A{

    private : 
        int x;
    public :
        A(int x) : x(x){};
        A(const A &a) : x(a.x){
            std::cout << "Copy constructor called " << x << std::endl;
        };

        int getX(){
            return x;
        }
};

int main(void){
    A a(10);
    std::cout << "value of obj a " << a.getX()<< std::endl;
    A b = a;
    std::cout << "value of obj b " << b.getX() << std::endl;
    A *c = new A(a);
    std::cout << "value of obj c " << c->getX() << std::endl;
    return 0;
}