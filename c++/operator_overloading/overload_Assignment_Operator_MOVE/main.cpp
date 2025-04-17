#include <iostream>
#include <cstring>

class myClass {
    private : 
        char *data;
    public : 
        // constructor 
        myClass(const char * s) : data{nullptr}{
            data = new char[std::strlen(s) + 1 ];
            strcpy(data,s);
        }
        // // copy constructor
        myClass(const myClass& source) : data{nullptr}{
            data = new char[std::strlen(source.data) + 1 ];
            strcpy(data,source.data);
        }
        // overload operator 
        myClass& operator = (myClass&& other) noexcept {
            if (this == &other){ // seft assignment check 
                return *this; // 
            }
            
            delete[] data;  // clean up assignment operator 
            //data = new char[std::strlen(other.data) +1];
            data = other.data;
            other.data = nullptr;

            return *this;
        }
        ~myClass(){
            delete [] data;
        }

        void set_data(const char * s){
            delete [] data;
            data = new char[std::strlen(s) + 1 ];
            strcpy(data,s);
        }

        void display(void){
            if (data) {
                std::cout << data << std::endl;
            } else {
                std::cout << "Object is empty!" << std::endl;
            }
        }
};

int main (void){
    myClass obj1("Hong Kong");
    myClass obj2("coc");
    obj2 = std::move(obj1);

    myClass obj3("vietnam");
    obj1.display(); // Hong Kong
    obj2.display(); // Hong Kong
    obj3.display();
    std::cout<<"-----------------------"<<std::endl;
    //obj1.set_data("China");
    obj1.display(); // China
    obj2.display(); // Hong kong
    obj3.display();
    
    std::cout<<"-----------------------"<<std::endl;
    obj2 = std::move(obj3);
    obj1.display(); // China
    obj2.display(); // vietnam
    obj3.display();

    return 0;

}

