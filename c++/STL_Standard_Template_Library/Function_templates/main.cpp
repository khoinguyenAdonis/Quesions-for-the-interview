#include <iostream>

/* 
* function template : that allow you to write fexible, reusable function. instedd of specifying of 
* data type explicitly, you placeholders(or type parameters) in the function definition. this allows the
* function work with different data type without rewriting the code for each type. 
*/

template <typename a> 
a sum(a x, a y){
    return x+y; 
}


int main (void){
    double result1= sum(1.2,1.3);
    int result2= sum(1,1);

    std::cout << "result1 is  "<< result1<< std::endl;
    std::cout << "result2 is  "<< result2<< std::endl;

    return 0;
}