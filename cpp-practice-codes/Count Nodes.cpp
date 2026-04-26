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

    int count(){
        int c = 0;
        Node* temp = head;
        while(temp){
            c++;
            temp = temp->next;
        }
        return c;
    }
};

int main(){
    LinkedList l;
    l.insert(10); l.insert(20); l.insert(30);
    cout << "Total nodes: " << l.count();
}