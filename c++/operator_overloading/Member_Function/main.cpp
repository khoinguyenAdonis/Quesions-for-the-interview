#include <iostream>
// overload member function is methods specical has delared in tha class implemention operator overloading. 
// redelare operator or expand operators such as + , - , *, /, == and a manny another operator working in 
// class 


class myClass{
    private:
        int x, y; 
    public:
        myClass(int a, int b) : x(a), y(b) {};

        myClass operator + (const myClass& other){
            return myClass(x+other.x,y+other.y);
        }

        void display(void){
            std::cout<< "x is : " << x << std::endl << "y is : "<< y<< std::endl;
        }
};

int main (void){
    
    myClass obj1(3,6);
    myClass obj2 (5,4);

    myClass obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}