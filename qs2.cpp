#include <iostream>
using namespace std;
//Unit 1 Set 2 qs 2

class Student {
private:
    char name[30];
    float marks;

public:
    void getDetails() {
        cout << "Name: "; cin >> name;
        cout << "Marks: "; cin >> marks;
    }

    void display() {
        cout << name << " (" << marks << ")" << endl;
    }

    float getMarks() { return marks; }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[100]; 
    float total = 0, avg;

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        s[i].getDetails();
        total += s[i].getMarks();
    }

    avg = (n > 0) ? (total / n) : 0;
    cout << "\nAverage: " << avg << endl;

    cout << "Above Average Students:" << endl;
    for (int i = 0; i < n; i++) {
        if (s[i].getMarks() > avg) {
            s[i].display();
        }
    }

    return 0;
}









