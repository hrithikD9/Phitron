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

void insertAtPosition(Node* head,int pos, int data){
    Node* newNode = new Node(data);
    Node* temp = head;

    for(int i = 1; i <= pos - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp; 
}


int main(){
    // Node creation
    Node* head = new Node(9);
    Node* x = new Node(17);
    Node* y = new Node(49);
    Node* z = new Node(79);
    Node* tail = z;

    // Node connection
    head->next = x;
    x->prev = head;

    x->next = y;
    y->prev = x;

    y->next = z;
    z->prev = y;

    int pos , data;
    cout << "Enter Position and Data : ";
    cin >> pos >> data;
    insertAtPosition(head,pos,data);

    printNormal(head);
    printReverse(tail);


    return 0;
}