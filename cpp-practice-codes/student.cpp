#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    void input() {
        cout << "Enter student id: ";
        cin >> id;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << id << " " << name << " " << marks << endl;
    }
};

void addStudent() {
    Student s;
    ofstream file("student.txt", ios::app);

    s.input();
    file.write((char*)&s, sizeof(s));

    file.close();
    cout << "Record added successfully";
}

int main() {
    int ch;

    do {
        cout << "1. Add Student";
        cout << "2. View Student";

        switch (ch) {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudent();
                break;

            case 0:
                exit(0);

            default:
                cout << "Enter correct choice";
        }

    } while (ch != 0);

    return 0;
}
void viewStudent() {
    Student s;
    ifstream file("student.txt");

    while (file.read((char*)&s, sizeof(s))) {
        s.display();
    }

    file.close();
 void search Student () 
 {
int id,found=0;
cout <<"Enter Id : ";
cin>> Id;
 
student s;
iif stream file ("student.txt");
while (file.read((char*)&s,sixe of (s)))
{
    if (s.Id = Id)
    {
        s.display()
        found = 1;
        break;

    }
}
file close()
 }