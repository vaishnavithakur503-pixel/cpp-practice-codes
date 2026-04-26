//* * * *
//*     *
//*     *
//* * * *

#include <iostream>
using namespace std;

class Pattern {
public:
    void print(int n) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(i==1 || i==n || j==1 || j==n)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    p.print(4);
}