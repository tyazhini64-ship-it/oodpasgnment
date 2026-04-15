#include <iostream>
using namespace std;

//unit 2 set 4 qs 5

class Book {
public:
    Book() { cout << "Book added." << endl; }

    ~Book() {
        cout << "Book record removed from library" << endl;
    }
};

int main() {
    
    Book b1; 
    
    cout << "Program ends." << endl;
    return 0;
}






