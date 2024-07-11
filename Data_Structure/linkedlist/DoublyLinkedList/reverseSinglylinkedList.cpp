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

void print(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void reverse(Node* &head, Node* cur){
    if(cur->next == nullptr){
        head = cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next = cur;
    cur->next = nullptr;
}

int main(){

    // Allocating memories of Node and pushing data
    Node* head = new Node(10);
    Node* one = new Node(11);
    Node* two = new Node(20);
    Node* three = new Node(21);
    Node* four = new Node(29);

    // Connecting Nodes
    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;

    cout << "Before reverse : ";
    print(head); 

    reverse(head,head);

    cout << endl << "After reverse : ";
    print(head);

    return 0;
}
