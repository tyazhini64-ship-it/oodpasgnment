#include <iostream>
using namespace std;



class Product {
public:
    void commonInfo() { cout << "Base Product Details" << endl; }
};

class Clothing : public Product {
public:
    void show() { cout << "Category: Clothing" << endl; }
};

class Electronics : public Product {
public:
    void show() { cout << "Category: Electronics" << endl; }
};

int main() {
    Clothing c;
    Electronics e;
    c.commonInfo(); c.show();
    e.commonInfo(); e.show();
    return 0;
}



