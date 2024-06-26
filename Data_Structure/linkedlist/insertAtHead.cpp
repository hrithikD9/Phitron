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

    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;

    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtAnyPos(Node* &head , int pos , int data){
    Node* newNode = new Node(data);
    Node* temp = head;

    for(int i = 1; i <= pos - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl;
}

void insertAtHead(Node* &head , int data){
    Node* newNode = new Node(data);

    newNode->next = head;
    head = newNode;
}

void print(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = nullptr;

    while (true){
    cout << "Option 1 : Insert At Tail " << endl;
    cout << "Option 2 : Print it !" << endl;
    cout << "Option 3 : Insert at any position " << endl;
    cout << "Option 4 : Insert at Head " << endl;
    cout << "Option 5 : EXIT !" << endl;
    cout << "Enter your choice : 1 / 2 / 3 / 4 / 5 : ";

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
        cout << "Enter Position & Data Value : ";
        int pos , data;
        cin >> pos >> data;

        if(pos == 0){
        insertAtHead(head , data);
        }

        else{
        insertAtAnyPos(head , pos , data);
        cout << endl;
        }
    }

    else if(op == 4){
        int data;
        cout << "Enter data : ";
        cin >> data;
        insertAtHead(head , data);
        cout << endl;
    }

    else if(op == 5){
        break;
    }

    else{
        cout << "Invalid";
    }
 }
    return 0;
}