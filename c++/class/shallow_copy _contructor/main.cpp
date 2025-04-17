#include <iostream>

// shallow copy constructor is specified method to copy data from one object to another object 
// but just only pointer or recerence is copied not the data itself
// so if the data is changed in one object it will also change in another object



class Shallow {
    private:
        int *data;
    public:
        Shallow(int a) { *data = a; };
        Shallow(const Shallow &source );
        void setData(int a) { *data = a; }
        int getData(void) { return *data; }
};

Shallow :: Shallow(const Shallow &source ) 
    : data(source.data){
    std::cout << "Copy constructor - shallow copy" << std::endl;
}

int main() {
    Shallow obj1(100);
    Shallow obj2 = obj1;
    std::cout << "obj1 data: " << obj1.getData() << std::endl;
    std::cout << "obj2 data: " << obj2.getData() << std::endl;
    obj1.setData(1000);
    std::cout << "obj1 data: " << obj1.getData() << std::endl;
    std::cout << "obj2 data: " << obj2.getData() << std::endl;
    return 0;
}