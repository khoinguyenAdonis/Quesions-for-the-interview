#include <iostream>

// the this pointer is implicity passed to all non-static member function of a class
// It refers to the calling objects memory address


class This_Pointer{
    private : 
        int data;
    public :
        This_Pointer(int a);
        void inscreaseData(int a);
        void display(void);
};

This_Pointer::This_Pointer(int a) : data(a){};

void This_Pointer::inscreaseData(int a){
    this->data += a;
}

void This_Pointer::display(void)
{
    std::cout<<" The data of the obj: "<< this->data << std::endl;
}

int main(void){
    This_Pointer obj1(16);

    obj1.display();

    obj1.inscreaseData(13);

    obj1.display();

    return 0;
}