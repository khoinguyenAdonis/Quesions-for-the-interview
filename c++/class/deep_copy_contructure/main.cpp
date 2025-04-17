#include <iostream>

// deep copy constructor is specified method to copy data from one object to another object
// but the data itself is copied not the pointer or reference
// so if the data is changed in one object it will not change in another object


class deepCopy{
    private: 
        int *data;
    public:
        deepCopy(int val);
        deepCopy(const deepCopy &source);

        void setData(int val);
        void DisplayData();
};  

deepCopy::deepCopy(int val){
    data = new int;
    *data = val;
}

deepCopy::deepCopy(const deepCopy &source) : data(&(*source.data)){
    data = new int;
    *data = *source.data;
    std::cout << "Copy constructor - deep copy" << std::endl;
}

void deepCopy:: setData(int val){
    *data = val;
}

void deepCopy::DisplayData(){
    std::cout << "Data: " << *data << std::endl;
}

int main (void){
    deepCopy obj1(50);
    deepCopy obj2 = obj1;
    obj1.DisplayData();
    obj2.DisplayData();
    obj1.setData(200);
    obj1.DisplayData();
    obj2.DisplayData();
    return 0;
}
