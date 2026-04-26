#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo() { x = 10; }
    friend void show(Demo);
};

void show(Demo d) {
    cout << "Value: " << d.x;
}

int main() {
    Demo d;
    show(d);
}