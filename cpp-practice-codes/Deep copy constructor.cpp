#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char* name;
public:
    Student(const char* n) {
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }

    Student(const Student& s) {
        name = new char[strlen(s.name)+1];
        strcpy(name, s.name);
    }

    void display() {
        cout << name << endl;
    }

    ~Student() {
        delete[] name;
    }
};

int main() {
    Student s1("Vaishnavi");
    Student s2 = s1;
    s2.display();
}