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

void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);

    if(tail == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    int data;
    while(true){
        cin >> data;
        if(data == -1) break;

        insertAtTail(head,tail,data);
    }
    
    printNormal(head);
    printReverse(tail);


    return 0;
}