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

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(!head) head = newNode;
        else{
            Node* temp = head;
            while(temp->next) temp = temp->next;
            temp->next = newNode;
        }
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
    l.insertAtEnd(10);
    l.insertAtEnd(20);
    l.insertAtEnd(30);
    l.display();
}