#include <iostream>
using namespace std;
// Unit 3 set 3 qs 4

class Delivery {
public:
    virtual void deliver() { cout << "Standard Delivery" << endl; }
};

class ExpressDelivery : public Delivery {
public:
    void deliver() override { cout << "Express Delivery (1 Day)" << endl; }
};

int main() {
    Delivery *d;
    ExpressDelivery ed;
    
    d = &ed;
    d->deliver();
    return 0;
}


