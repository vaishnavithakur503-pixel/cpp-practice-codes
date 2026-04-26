#include <iostream>
using namespace std;

class Add {
public:
    int sum(int a, int b) {
        return a + b;
    }
    int sum(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Add obj;
    cout << obj.sum(2,3) << endl;
    cout << obj.sum(1,2,3);
}