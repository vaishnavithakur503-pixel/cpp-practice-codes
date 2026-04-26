#include<iostream>
using namespace std;
void show(int *p){
    cout<<*p;
}
int main(){
    int a=15;
    show(&a);
}