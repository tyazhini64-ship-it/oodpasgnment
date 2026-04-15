#include <iostream>
using namespace std;

// Unit 3 set 3 qs 1
class Product {
protected:
    int id;
    float price;
public:
    void getProduct() {
        cout << "Enter ID and Price: ";
        cin >> id >> price;
    }
};

class ElectronicProduct : public Product {
    int warranty;
public:
    void getElectronic() {
        getProduct();
        cout << "Enter Warranty (months): ";
        cin >> warranty;
    }
    void display() {
        cout << "ID: " << id << " | Price: " << price << " | Warranty: " << warranty << " months" << endl;
    }
};

int main() {
    ElectronicProduct ep;
    ep.getElectronic();
    ep.display();
    return 0;
}


