#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int id;
    char name[20];
public:
    void input() {
        cin >> id >> name;
    }

    void write() {
        ofstream f("data.txt", ios::app);
        f << id << " " << name << endl;
        f.close();
    }
};

int main() {
    Student s;
    s.input();
    s.write();
}