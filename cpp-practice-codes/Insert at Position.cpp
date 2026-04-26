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

    void insertAtPosition(int pos, int val){
        Node* newNode = new Node(val);
        Node* temp = head;

        for(int i=1;i<pos-1;i++) temp = temp->next;

        newNode->next = temp->next;
        temp->next = newNode;
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
    l.insertAtPosition(2,15);
    l.display();
}