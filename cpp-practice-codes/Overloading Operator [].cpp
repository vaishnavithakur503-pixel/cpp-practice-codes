#include <iostream>
using namespace std;

class Array {
    int arr[5];
public:
    Array() {
        for(int i=0;i<5;i++) arr[i] = i*2;
    }

    int& operator[](int i) {
        return arr[i];
    }
};

int main() {
    Array a;
    cout << a[3];
}