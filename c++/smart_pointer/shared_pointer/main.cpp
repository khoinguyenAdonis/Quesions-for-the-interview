#include <iostream>

/* nên cấp phát vào heap để quản lý vè các smartpointer sinh ra để quản lý vùng nhớ trên heap.
* nó sẽ cố gắn giải phóng vùng nhớ của đối tượng nó tror đến khi hết hiệu lực. có thể gây sai nếu khai báo k cấp phát
*/
/*share pointer */

/*
->>>>>>>>Ownership: Shared ownership. Multiple std::shared_ptr instances can point to the same resource.
->>>>>>>>Reference Counting: Uses a reference count to keep track of how many std::shared_ptr instances share ownership. 
The resource is released only when the last std::shared_ptr is destroyed.
->>>>>>>>Efficiency: Slightly heavier due to reference counting.
->>>>>>>>Use Case: Ideal when multiple parts of the code need to share access to a resource.
->>>>>>>>Thread-Safety: Reference counting is thread-safe, but the resource itself is not protected.
*/

#include <memory>
class base {
    private : 
        int a ;
    public : 
        base(int c) : a {c}{}
        void display (void){
            std::cout<< " data is : " << a<< std::endl;
        }
        ~base (){
            std :: cout << "deconstructor is called"<< std::endl;
        }
};

int main (void){
    base * obj1 = new base(12);
    
    {
    std::shared_ptr<base> ptr (obj1);

    ptr->display();
        {
            std::shared_ptr<base> ptr1 = ptr; // ptr 1 dđược ptr shared dữ liệu từ ptr
            std::cout<<" ptr1 point to obj1"<<std::endl;
            std::cout << "Reference count: " << ptr.use_count() << "\n";
        }
        std::cout << "Reference count: " << ptr.use_count() << "\n";
        std::cout<< " ptr still point to obj1 "<< std::endl;
    }
    // thu hoi obj 1 
    
    return 0;
}