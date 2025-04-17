#include <iostream>

using namespace std ;

class myClass{

    friend ostream& operator<<(ostream& out, const myClass& p);
private:
    int x, y; // Tọa độ x và y

public:
   
    myClass(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}
    
};

ostream& operator <<(ostream & out, const myClass& p){
    out << "(" << p.x <<","<<p.y<<")"<<endl;
    return out;
}


int main(int argc, char const *argv[])
{
    myClass obj1(1,6);
    cout << obj1;
    return 0;
}

