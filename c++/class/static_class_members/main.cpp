#include <iostream>

// Static variables are stored in static memory.
// All objects created from the same class will share the static variable.
// Static variables will persist until the end of the program's execution.


class example{
    private :
        static int counter ;
        std::string name;
    public : 
        example(std::string a) : name(a){
            counter ++;
        }

        static int get_Counter(void){
            return counter;
        }
        ~example(){
            std::cout<<"Destructor called"<<std::endl;
            counter --;
        }
};

int example::counter = 0;

void display(void){
    std::cout<< " number counter is :  "<< example::get_Counter() << std::endl;
}

int main (void){
    example obj1("khoi");
    display();
    example obj2("hai");
    display();

    {
        example obj3("Loc");
        display();
    }

    std::cout<< "Total : -------------"<<std::endl;
    display();

    return 0;

}