#include <iostream>
using namespace std;

class Add {
public:
    int x;
    Add(int a) { x = a; }

    Add operator + (Add obj) {
        Add temp(0);
        temp.x = x + obj.x;
        return temp;
    }
};

int main() {
    Add a1(5), a2(10);
    Add a3 = a1 + a2;
    cout << "Sum: " << a3.x;
}