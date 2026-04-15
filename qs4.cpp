#include <iostream>
using namespace std;

//unit 2 set 4 qs 4

class Book {
public:
    float price;
    Book(float p = 0) { price = p; }

    Book operator + (Book const &obj) {
        Book temp;
        temp.price = price + obj.price;
        return temp;
    }
};

int main() {
    Book b1(300), b2(500);
    Book total = b1 + b2; 
    cout << "Combined Total Price: " << total.price << endl;
    return 0;
}



