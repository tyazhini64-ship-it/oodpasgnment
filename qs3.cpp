#include <iostream>
using namespace std;

//unit 2 set 4 qs 3
class Library {
public:
    void calculateCost(float price, int copies) {
        cout << "Total Cost: " << (price * copies) << endl;
    }
    void calculateCost(float price, int copies, float maint) {
        cout << "Total Cost with Maintenance: " << (price * copies) + maint << endl;
    }
};

int main() {
    Library lib;
    lib.calculateCost(100.0, 5);
    lib.calculateCost(100.0, 5, 50.0);
    return 0;
}





