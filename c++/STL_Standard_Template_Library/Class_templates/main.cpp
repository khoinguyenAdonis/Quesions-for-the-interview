#include <iostream>

template <typename type>
class base {
    private :
        type data;
    public :
        base (type value) : data{value}{}
        void display(void){
            std::cout << " data is: "<< data<< std::endl; 
        }
    };

int main (void){
    
    base<int> obj1(1); 
    obj1.display();

    base<double> obj2(2.1);
    obj2.display();
    return 0 ; 
}