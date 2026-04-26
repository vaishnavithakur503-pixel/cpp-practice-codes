#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    void input() {
        cin >> name >> age;
    }
    void display() {
        cout << "Name: " << name << "\nAge: " << age;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}