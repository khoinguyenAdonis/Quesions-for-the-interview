#include <iostream>

// move data from this object to another object 

class move_constructor
{
    private :
        int *data;
    public :
        move_constructor(int d);
        move_constructor(move_constructor &&obj) noexcept;

        void setdata(int a);
        void display();
};


move_constructor::move_constructor(int d)
{
    data = new int;
    *data = d;
}

move_constructor::move_constructor(move_constructor &&obj)  noexcept
{
    data = new int;
    data = obj.data;
    obj.data = nullptr;
}

void move_constructor::setdata(int a){
    *data = a;
}

void move_constructor::display()
{
    std::cout << "Data : " << *data << std::endl;
}

int main(void){
    move_constructor obj1(16);
    obj1.display();

    move_constructor obj2 = std::move(obj1);
    obj2.display();
    obj1.setdata(19); // null non-set
    obj1.display();   // null ptr
    obj2.display();
    return 0;
}