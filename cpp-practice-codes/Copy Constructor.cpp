#include<iostream>
using namespace std;

class Sample {
    int x;
public:
    Sample(int a){
        x=a;
    }
    Sample(Sample &s){
        x=s.x;
    }
    void show(){
        cout<<x;
    }
};

int main(){
    Sample s1(20);
    Sample s2=s1;
    s2.show();
}