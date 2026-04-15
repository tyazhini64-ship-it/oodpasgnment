#include <iostream>
using namespace std;
// Unit 3 set 3 qs 3

class User {
public:
    void userDetails() { cout << "User: Alex" << endl; }
};

class Cart {
public:
    void cartDetails() { cout << "Cart: 3 Items, Total: $150" << endl; }
};

class Order : public User, public Cart {
public:
    void showOrder() {
        userDetails();
        cartDetails();
        cout << "Order Placed Successfully!" << endl;
    }
};

int main() {
    Order myOrder;
    myOrder.showOrder();
    return 0;
}





