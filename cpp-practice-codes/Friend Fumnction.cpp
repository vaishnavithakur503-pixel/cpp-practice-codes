#include <iostream>
using namespace std;

class Test {
    int a, b;
public:
    Test(int x, int y) {
        a = x; b = y;
    }
    friend int sum(Test t);
};

int sum(Test t) {
    return t.a + t.b;
}

int main() {
    Test t(5,7);
    cout << sum(t);
}