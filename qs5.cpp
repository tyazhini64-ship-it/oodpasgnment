#include <iostream>
using namespace std;

// Unit 3 set 3 qs 5
class Discount {
public:
    virtual void applyDiscount() = 0; 
};

class FestivalOffer : public Discount {
public:
    void applyDiscount() override {
        cout << "Applying 20% Festival Discount" << endl;
    }
};

int main() {
    FestivalOffer f;
    f.applyDiscount();
    return 0;
}






