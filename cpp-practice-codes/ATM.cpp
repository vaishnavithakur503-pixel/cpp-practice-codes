#include <iostream>
using namespace std;
class ATM {
    int balance;
public:
    ATM(int b){
        balance=b;
    }
    int


    void show(){
        cout<<"Balance="<<balance;
    }
};
int main(){
 ATM obj(3);
obj.show();
return 0;
}



