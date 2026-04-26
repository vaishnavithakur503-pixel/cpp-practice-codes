#include<iostream>
using namespace std;
int main(){
    int n,rev=0,temp,r;
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(temp==rev)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}