#include <iostream>

class suorce{
    private : 
        int x;
    
     public:
        suorce () : x(10){};
        suorce (int a) : x(a){};
        void set_x(int a){
            x =a ;
        }
        void get_x(void){
            std::cout<<" x is : " << x<<std::endl; 
        }

};

class delivered : public suorce {

    private : 
        int c;
    
     public:
        delivered(int d) : c{d}{};
        // void set_x(int a){
        //     x =a ;
        // }
        // int get_x(void){
        //     std::cout<<" x is : " << x<<std::endl; 
        // }

};


int main(void){
    suorce obj1(10);

    delivered obj2(2);
    obj2.get_x();
    obj2.set_x(12);
    obj2.get_x();
    return 0 ; 
}