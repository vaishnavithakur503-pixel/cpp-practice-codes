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

    int search(int key){
        Node* temp = head;
        int pos = 1;
        while(temp){
            if(temp->data == key) return pos;
            temp = temp->next;
            pos++;
        }
        return -1;
    }
};

int main(){
    LinkedList l;
    l.insert(10); l.insert(20); l.insert(30);

    int pos = l.search(20);
    if(pos != -1) cout << "Found at position " << pos;
    else cout << "Not found";
}