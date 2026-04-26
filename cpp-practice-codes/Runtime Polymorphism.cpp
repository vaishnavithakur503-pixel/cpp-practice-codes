#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Bark\n";
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
}