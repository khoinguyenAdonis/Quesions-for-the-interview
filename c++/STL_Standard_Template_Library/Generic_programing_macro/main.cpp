#include <iostream>
#include <vector>
#include <algorithm>
/*
* STL
* --> Generic programming macro : enabling algorithm and data structure to work with any data tyoe 
* --> It achieves this through templates. for instance constainers like std::vector and algorithm 
* like std::sort use templates provide flexibility and type safety.
*/

int main(){
    std::vector<int> array = {0,2,6,1};
    std::sort(array.begin(), array.end());

    for (const auto &i : array) /* for generator indicate i for array, so i is value of array*/
    {
        std::cout << i << " \n";
    }
    return 0;
    
}