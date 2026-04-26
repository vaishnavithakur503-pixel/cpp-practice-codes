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

    void insertAtStart(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
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
    l.insertAtStart(30);
    l.insertAtStart(20);
    l.insertAtStart(10);
    l.display();
}