#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) {
        x = a;
    }
    void show() {
        cout << "Value: " << x;
    }
};

int main() {
    Number n(10);
    n.show();
}