#include <iostream>
using namespace std;
//unit 2 set 4 qs 2

class Book {
    string title;
    float price;
public:
    Book(string t, float p) { title = t; price = p; }

    Book(const Book &obj) {
        title = obj.title;
        price = obj.price;
        cout << "Copy Constructor Called!" << endl;
    }
    void display() { cout << title << " costs " << price << endl; }
};

int main() {
    Book b1("OOP", 450);
    Book b2 = b1; 
    b2.display();
    return 0;
}





