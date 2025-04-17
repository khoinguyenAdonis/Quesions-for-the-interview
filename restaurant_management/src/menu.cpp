#include "D:\Personal_Works\c_c++\restaurant_management\inc\menu.h"

// global variable 
Menu menuDish;

void menu_Handler(){
}


void Menu::addItem(shared_ptr <IMenuItem> item){
    items.push_back(item);
}

void Menu::printDisplay(){
    for (const auto& i : items){
        i->printInfo();
    }
}

void Menu::remoteItem(string Id){

}

string MenuDetail::getName() const {
    return name;
}

string MenuDetail::getId() const {
    return id;
}

double MenuDetail::getPrice() const {
    return price;
}

void MenuDetail::printInfo() const {
    cout<<"Name : "<< name<< "ID : " << id << "Price : "<<price<<endl;
}

