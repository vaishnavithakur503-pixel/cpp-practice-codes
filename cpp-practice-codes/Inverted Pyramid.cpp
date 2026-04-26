//* * * *
 //* * *
  //* *
  // *

  #include <iostream>
using namespace std;

class Pattern {
public:
    void print(int n) {
        for(int i=n;i>=1;i--) {
            for(int j=0;j<n-i;j++) cout << " ";
            for(int k=1;k<=i;k++) cout << "* ";
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    p.print(4);
}