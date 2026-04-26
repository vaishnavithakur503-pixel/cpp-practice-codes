#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class";
    }
};

int main() {
    Derived d;
    d.show();
}