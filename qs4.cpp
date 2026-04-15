#include <iostream>
using namespace std;

//Unit 1 Set 2 qs 4

class Student {
    int roll;
public:
    void input() { cin >> roll; }
    void output() { cout << "Roll: " << roll << endl; }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
//
    Student s[100];     
    Student *p = s;  
    for (int i = 0; i < n; i++) {
        cout << "Enter roll " << i + 1 << ": ";
        (p + i)->input();
    }

    cout << "\nDisplaying Details:" << endl;
    for (int i = 0; i < n; i++) {
        (p + i)->output();
    }

    return 0;
}



