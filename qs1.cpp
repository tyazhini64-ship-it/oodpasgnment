#include <iostream>
using namespace std;

//unit 2 set 4 qs 1
class Book {
    string title;
    float price;
public:
    Book() {
        title = "n";
        price = 0.0;
    }
    Book(string t, float p) {
        title = t;
        price = p;
    }
    void display() {
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};

int main() {
    Book b1;             
    Book b2("The Stand", 500);
    b1.display();
    b2.display();
    return 0;
}




