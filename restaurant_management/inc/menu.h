#ifndef __MENU_H__
#define __MENU_H__

#include <iostream>
#include <memory>
#include <vector>

using namespace std;


class IMenuItem {
    public :
        virtual string getName() const = 0;
        virtual string getId() const = 0;
        virtual double getPrice() const = 0;
        virtual void printInfo() const = 0;
        ~IMenuItem();
};

class MenuDetail : public IMenuItem {
    private :
        string name;
        string id;
        double price;
    public :
        MenuDetail(string N, string I, double P) : name(N), id(I), price(P) {}
        string getName() const override;
        string getId() const override;
        double getPrice() const override;
        void printInfo() const override;
        ~MenuDetail(); 
};

class Menu {
    private :
        vector<shared_ptr <IMenuItem>> items;
    public :
        void addItem(shared_ptr <IMenuItem> item);
        void remoteItem(string Id);
        void printDisplay();
}

#endif