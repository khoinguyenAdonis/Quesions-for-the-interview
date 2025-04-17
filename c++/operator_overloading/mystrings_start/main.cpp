#include <iostream>
#include <cstring>

// nạp chồng constructor với cùng 1 constructor nhưng khác arg kết qủa khởi tạo sẽ khác nhau 


class myClass{
    private :
         char * str;

    public : 
        myClass(); // no-args constructor
        myClass(const char * s); // overload constructor
        myClass(const myClass &source); // copy constructor

        //~myClass(); // deconstructor
        
        void display(void) const;
        int get_Lenght(void) const;
        const char * get_Str(void) const;
};

myClass::myClass() : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

myClass::myClass(const char *s) : str{nullptr}{
    if(s ==nullptr){
        str = new char[1];
        *str = '\0';
    }
    else{
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

myClass::myClass(const myClass &source) : str{nullptr}{
    str = new char[std::strlen(source.str) +1];
    std::strcpy(str,source.str);
}

void myClass::display(void) const{
    std::cout << str << ":"<< get_Lenght() << std::endl;
}

int myClass::get_Lenght(void) const{
    return std::strlen(str);
}

const char* myClass::get_Str(void) const{
    return str;
}

int main (void){
    myClass obj1("khoi frp chsi vai lin");
    myClass obj3;
    obj1.display();
    myClass obj2 = obj1;
    obj2.display();
    obj3.display();

    std::cout << "-----------------------"<<std::endl;
    return 0;
}

