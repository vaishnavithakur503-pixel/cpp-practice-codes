#include<iostream>
using namespace std;

class Demo {
public:
    Demo(){
        cout<<"Constructor\n";
    }
    ~Demo(){
        cout<<"Destructor";
    }
};

int main(){
    Demo obj;
}