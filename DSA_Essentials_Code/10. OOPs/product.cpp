#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Product shopping website
class Product {
private:
    int id;  // 4 bytes space
    char name[100]; // 100 bytes 
    int mrp;    // 4 bytes space
    int selling_price;     // 4 bytes space
public:
    // constructor
    // default constructor
    Product(){
        cout << "Inside Constructor" << endl;
    }
    // parameterized constructor
    Product(int id, char *n, int mrp, int selling_price){
        this->id = id;
        strcpy(name, n);
        this->mrp = mrp;
        this->selling_price = selling_price;
    }
    // above we have done contructor overloading --> meaning method containing same name but different parameters
    
    // copy constructor
    Product(Product &X){
        id = X.id;
        mrp = X.mrp;
        selling_price = X.selling_price;
        strcpy(name, X.name);
    }

    // Setters
    void setMRP(int price){
        if(price > 0){
            mrp = price;
        }
    }
    void setSellingPrice(int price){
        // additional checks
        if(price > mrp){
            selling_price = mrp;
        }else{
            selling_price = price;
        }
    }

    // Getters
    int getMrp(){
        return mrp;
    }

    int getSellingPrice(){
        return selling_price;
    }

    void showDetails(){
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "MRP : " << mrp << endl;
        cout << "Selling Price : " << selling_price << endl;
        cout << "----------------------" << endl;
        cout << endl;
    }

};

int main(){
    Product camera(101, "GoProHero9", 28000, 26000); // Product class will not take any space until an object of Product class is declared
    // here we have declared camera - an object of product class.

    // cout<<sizeof(camera)<<endl;  // output will be 112 bytes --> 4 bytes + 100 bytes + 4 bytes + 4 bytes of Product class
    
    // we can access member-variables of Product class through objec with the help of (.) dot operator
    // camera.mrp = 100;
    // camera.selling_price = 92;
    // also remember that , to access these member variables directly they need to be declared public 
    // by default they are private and cannot be accessed directly

    // using concept of setters and getters
    // camera.setMRP(100);
    // camera.setSellingPrice(200);

    // cout << "MRP of camera: " << camera.getMrp() << endl;
    // cout << "Selling price of camera: " << camera.getSellingPrice() << endl;

    // copt constructor
    Product webcam(camera); // copy is made using special constructor known as copy-constructor
    Product handyCam = camera; // another way to make call to copy constructor

    camera.showDetails();
    webcam.showDetails();
    handyCam.showDetails();

    return 0;
}
