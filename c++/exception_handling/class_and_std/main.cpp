#include <iostream> 
#include <memory>

/*
* lớp base kế thùa lớp exception của thư viênh std nên mình có thể tạo ra các exception theo ý mình thông qua hàm ảo virtual 
* ghi đè lên what() của exception ví dụ dưới đây sẽ tạo các cá throw từ constructor  
*/

class base : public std::exception{
    int data;
    std::string name;
    public:
        base() noexcept = default;
        ~base(){
            std::cout<<"Destructor\n";
        } ;
        base(std::string a, int b) : data{b}, name{a} {
            if (b < 0){
                throw base{};
            }
        }
        virtual const char* what() const noexcept{
            return "Base exception!!!!!!\n";
        }
};

int main (void){
    try{
        std::unique_ptr<std::exception> ptr = std::make_unique<base>("khoi", -13);
        std::cout<<"delare successful\n";
    }
    catch(base &ex){
        std::cout << ex.what()<<std::endl;
    }
    std::cout<<"finish \n";
    return 0;
}