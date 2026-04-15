#include <iostream>
using namespace std;
//Unit 1 Set 2 qs 3
class StaticNonStatic {
public:
    int x = 0;        
    static int y;      

    void update() {
        x++;
        y++;
    }
};

int StaticNonStatic::y = 0; 

int main() {
    StaticNonStatic obj1, obj2;

    cout << "INITIALLY" << endl;
    cout << "x: " << obj1.x << " | Obj2 x: " << obj2.x << " |  y: " << StaticNonStatic::y << endl;

    cout << "\n AFTER UPDATION" << endl;
    obj1.update();
    cout << "\n OBJECT 1" << endl;
    cout << "Obj1 x: " << obj1.x << " |  y: " << StaticNonStatic::y << endl;

    obj2.update();
    cout << "\n OBJECT 2" << endl;
    cout << "Obj2 x: " << obj2.x << " |  y: " << StaticNonStatic::y << endl;

    return 0;
}


