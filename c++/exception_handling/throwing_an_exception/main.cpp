#include <iostream>

using namespace std;

// when call chain:  func a call func b , func b call func c . When get  throw any func, 
// the programming will be calling cacth nearest. and then check exception argument.   
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
            throw invalid_argument("divide zero"); // throw quawng loi
        }
        if (miler < 0 || gallons < 0 )
        {
            throw invalid_argument(" Negative value error");
        }
        
    }
    catch(const exception &e) // bắt lấy lỗi và đưa ra bằng hàn what()
    {
        std::cerr << e.what() << '\n';
    }
    cout<<"Bye\n";

    return 0;
    
}