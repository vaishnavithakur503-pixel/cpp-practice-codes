#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!";
    }
};

int main() {
    Demo d;
}