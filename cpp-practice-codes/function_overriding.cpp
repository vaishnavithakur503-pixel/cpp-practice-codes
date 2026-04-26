#include <iostream>          // Line 1
using namespace std;         // Line 2

class Parent {               // Line 3
public:                      // Line 4
    void show() {            // Line 5
        cout << "This is Parent class function" << endl;   // Line 6
    }
};

class Child : public Parent {   // Line 7
public:                         // Line 8
    void show() {               // Line 9
        cout << "This is Child class function" << endl;   // Line 10
    }
};

int main() {                // Line 11
    Child obj;              // Line 12
    obj.show();             // Line 13
    return 0;               // Line 14
} 