#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define DELEGATING_CONTRUCTOR 1

class B {

    private:
        string name;
        int tuoi;
    public:
        B(string a, int b) {
            name = a;
            tuoi = b;
        }
        B(string a) {
            name = a;
            
        }
        B(int b) {
            tuoi = b;
        }
        B() {
            name = "BUN";
            tuoi = 15;
        }
        string getA();
        int getB();
        
        ~B() {};

};

/** constructor initalization list*/
#if CONTRUCTOR_LIST
class A{
    private:
        string name;
        int tuoi;
    public:
        A(string a, int b) : name(a), tuoi(b) {}
        A(string a) : name(a) {}
        A(int b): tuoi(b) {}
        A() : name("BUN"), tuoi(15) {}
        string getA();
        int getB();
        ~A() {};
};
#elif DELEGATING_CONTRUCTOR // auto delegating obj initalization to another contructor
class A{
    private:
        string name;
        int tuoi;
    public:
        A(string a, int b) : name(a), tuoi(b) {}
        A(string a) :A {a,10}{};
        A() : A{"none",0}{};
        string getA();
        int getB();
        ~A() {};
};
#endif

string A::getA() {
    return name;
}

int A::getB() {
    return tuoi;
}

int main (void) {
    A student("khoi");
    cout << "Ten: " << student.getA() << endl;
    cout << "Tuoi: " << student.getB() << endl;

    cout << "size of A: " << sizeof(A) << endl;
    return 0;
}

