#include<iostream>
using namespace std;

class Bank {
    int balance;
public:
    Bank(int b){
        balance=b;
    }
    void show(){
        cout<<"Balance="<<balance;
    }
};

int main(){
    Bank b1(5000);
    b1.show();
}