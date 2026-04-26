#include<iostream>
using namespace std;

class Test {
public:
    Test() {
        cout<<"Default\n";
    }
    Test(int x) {
        cout<<"Parameterized "<<x;
    }
};

int main(){
    Test t1;
    Test t2(10);
}