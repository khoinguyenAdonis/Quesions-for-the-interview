#include <iostream>
#include <cstring>

using namespace std;

class myClass {
    
    friend myClass operator+ (const myClass &other1 , const myClass &other2);
    private :
        char *str;

    public : 
    // constructor
    myClass (const char * s) : str{nullptr}{
        str = new char[strlen(s) +1];
        strcpy(str, s);
    }

    void display(void){
        cout << str<< "| lenght is: " << strlen(str)<< endl; 
    }
};

myClass operator+ (const myClass &other1, const myClass &other2 ){
    char * str = new char [strlen(other1.str) + strlen(other2.str) + 1];
    strcpy(str, other1.str);
    strcat(str,other2.str);

    myClass temp(str);
    delete str;
    return temp;
}

int main (void){
    myClass obj1("khoi");
    myClass obj2(" dep chai vcl");

    myClass obj3 = obj1 +obj2;

    obj3.display();
    return 0;
}
