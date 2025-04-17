#include <iostream>
#include <algorithm>

template <typename type>
class base {
    private :
        type *data;
        int size;
    public :
        base (int num){
            this->size = num;
            data = new type[num];
        }
        ~base (){
            delete[] data;
        }
        void set_data(int index, type value){
            if (index < size){
                data[index] = value;
            }
            else {
                std::cout<< " index higher than size array\n";
            }
        }
        void display(void){
            for(int i = 0 ; i < size ; i ++){
                std::cout<< data[i] << " ";
            }
            
            std::cout << "\n";
        }
};

int main (void){
    
    base<int> obj1(3);
    obj1.set_data(0,1);
    obj1.set_data(1,2);
    obj1.set_data(2,3);
    obj1.display();

    base<std::string> obj2(2);
    obj2.set_data(0,"Khoi dep chai");
    obj2.set_data(1, "nhat qua dat");
    obj2.display();
    return 0 ; 
}