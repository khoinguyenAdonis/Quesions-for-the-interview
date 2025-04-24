#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class base {
    private :
        int age;
        string name;
    public :
        base () = default;
        base (string c, int a) : name{c}, age{a}{};
        ~base(){
            cout<< " Destructor is called"<< endl;
        }
        bool operator < (const base & source){
            return (this->name < source.name);
        }
        bool operator ==(const base & source){
            return (this->name == source.name && this->age == source.age );
        }
};

int main (void){
    // cout<<"//////////////////////////////////////\n"<<endl;

    // vector<int> vec {1,2,3,4,5};
    // auto loc = find(vec.begin(),vec.end(), 2); // algorithm std::find using find the number 2
    // if (loc != vec.end())
    //     cout<<" found the number" << *loc<<endl;
    // else
    //     cout<< "Couldn't find the number"<< endl;
    // cout<<"//////////////////////////////////////\n"<<endl;
    // auto num = count(vec.begin(), vec.end(), 5); // algorithm std::count using quantity number 5 in this vector
    // cout<< " occurrence found :  "<< num << endl;

    // cout<<"//////////////////////////////////////\n"<<endl;
    // auto num1 = count_if(vec.begin(), vec.end(), [](int x){return x%2 == 0;}); // algorithm std::count_if using quantity number 5 in this vector
    // cout<< " The numbers %2 equal zero :  "<< num1 << endl;

    // for_each(vec.begin(),vec.end(),[](int x){if(x%2 == 0 ){
    //   cout<<" The all of number %2 : " << x;  
    // }} );

    auto num = [](int x, int y) {return x*y;};
    cout << " num is "<< num(2,3)<<endl; 
}