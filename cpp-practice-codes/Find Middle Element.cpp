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

    void findMiddle(){
        Node* slow = head;
        Node* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle: " << slow->data;
    }
};

int main(){
    LinkedList l;
    l.insert(10); l.insert(20); l.insert(30); l.insert(40); l.insert(50);
    l.findMiddle();
}