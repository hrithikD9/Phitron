#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int data){
        this->prev = nullptr;
        this->data = data;
        this->next = nullptr;
    }
};

void printNormal(Node* head){
    Node* temp = head;

    cout << "Head ";
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void printReverse(Node* tail){
    Node* temp = tail;

    cout << "NULL <- ";
    while(temp != nullptr){
        cout << temp->data << " <- ";
        temp = temp->prev;
    } 
    cout << "Tail" << endl;
}


int main(){
    // Node creation
    Node* head = new Node(9);
    Node* x = new Node(17);
    Node* y = new Node(49);
    Node* tail = y;

    // Node connection
    head->next = x;
    x->prev = head;

    x->next = y;
    y->prev = x;

    printNormal(head);
    printReverse(tail);


    return 0;
}