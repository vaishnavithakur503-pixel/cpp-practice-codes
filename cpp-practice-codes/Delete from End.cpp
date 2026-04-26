#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){ data = val; next = NULL; }
};

class LinkedList{
    Node* head;
public:
    LinkedList(){ head = NULL; }

    void insert(int val){
        Node* newNode = new Node(val);
        if(!head) head = newNode;
        else{
            Node* temp = head;
            while(temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

    void deleteEnd(){
        if(!head) return;
        if(!head->next){
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while(temp->next->next) temp = temp->next;

        delete temp->next;
        temp->next = NULL;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    LinkedList l;
    l.insert(10); l.insert(20); l.insert(30);
    l.deleteEnd();
    l.display();
}