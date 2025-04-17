#include <iostream>

using namespace std;

int main(void){
    int miler{};
    int gallons{};
    double miler_per_gallons{};

    cout << " Enter miller: ";
    cin>> miler;
    cout << " Enter gallons: ";
    cin>> gallons;

    try
    {
        if(gallons == 0){
            throw 0;
        }
    }
    catch(int &e)
    {
        std::cerr << "You can divide zero" << '\n';
    }

    return 0;
    
}