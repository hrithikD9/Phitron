#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtTail(Node* &head, Node* &tail ,int data){
    Node* newNode = new Node(data);

    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

   int data;
   while(true){
    cin >> data;
    if(data == -1){
        break;
    }
    insertAtTail(head, tail , data);
 }
    
    int mx = INT_MIN;
    int mn = INT_MAX;

    // Sorting linkedlist
    Node* temp = head;
    while (temp != nullptr) {
        if (mx < temp->data) mx = temp->data;
        if (mn > temp->data) mn = temp->data;
        temp = temp->next;
    }
    cout << mx - mn << "\n";

    return 0;
}