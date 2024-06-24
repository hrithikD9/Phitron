#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtTail(Node* &head , int data){
    Node* newNode = new Node(data);

    if( head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node* head){
    Node* tp = head;

    while(tp != nullptr){
        cout << tp->data << " -> ";
        tp = tp->next;
    }
    cout << "NULL" << endl;
}

int main(){

    Node* head = nullptr;

    while (true){
    cout << "Option 1 : Insert At Tail " << endl;
    cout << "Option 2 : Print it !" << endl;
    cout << "Option 3 : Break!" << endl;
    cout << "Enter your choice : 1 / 2 / 3 : ";

    int op;
    cin >> op;
    cout << endl;

    if(op == 1){
        cout << "Eneter data value for new node : ";
        int data;
        cin >> data;
        cout << endl;
        insertAtTail(head , data);
    }

    else if(op == 2){
        cout << "The list are : ";
        print(head);
        cout << endl;
    }

    else if(op == 3){
        break;
    }

    else{
        cout << "Invalid";
    }
 }
    return 0;
}