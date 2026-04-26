#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
    virtual void show() { cout << "Base x: " << x << endl; }
};

class Derived : public Base {
public:
    int y = 20;
    void show() { cout << "Derived x+y: " << x + y << endl; }
};

int main() {
    Derived d;
    Base b = d;   // object slicing
    b.show();     // calls Base version
}