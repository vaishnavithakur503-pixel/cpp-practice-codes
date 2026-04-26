#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A";
    }
};

class B : public A {
};

int main() {
    B obj;
    obj.show();
}