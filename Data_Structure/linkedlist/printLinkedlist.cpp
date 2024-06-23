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

    // a temporary Node to store head memories
    Node* temp = head;

    // Printing the Nodes
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }



    return 0;
}
