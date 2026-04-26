#include<iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r) {
        roll=r;
    }
    void display(){
        cout<<"Roll="<<roll;
    }
};

int main(){
    Student s(101);
    s.display();
}