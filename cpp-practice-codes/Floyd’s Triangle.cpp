//1
//2 3
//4 5 6
//7 8 9 10

#include <iostream>
using namespace std;

class Pattern {
public:
    void print(int n) {
        int num = 1;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=i;j++) {
                cout << num++ << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    p.print(4);
}