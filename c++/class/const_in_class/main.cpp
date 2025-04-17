#include <iostream>

// const data member if you declare a class member as a const. Which makes it read only. 
// However, sine const members must be initalized when the object is contructed, 
// They need to set in the initalized list of the contructor 

//Cosnt member function . Data can't modify any member variable (except those declare as mutable)

//const object's if you declare canst object you can only call members function on it, the object unmodify.

//const pointer similar c languega
/*
const MyClass* ptr1;     // Pointer to a const object (cannot modify the object) (read only)
MyClass* const ptr2;     // Const pointer to a non-const object (cannot change the pointer)
const MyClass* const ptr3; // Const pointer to a const object (cannot do either)
*/


class Const_Object{
    private :
        mutable int data;
    public :
        Const_Object(int a) : data(a){};
        void setData(int a) const;
        void display(void);
};

void Const_Object :: display(void){
    std::cout<< "Data of obj is: " << data<< std::endl;
}

void Const_Object :: setData(int a) const{
    data =a;
}

int main(void){
    Const_Object obj1(15);

    obj1.setData(50);
    obj1.display();
    return 0;
}