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

void deleteAtPosition(Node* head,int pos){
    Node* temp = head;

    for(int i = 1; i <= pos - 1; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void deleteAtTail(Node* &tail){
    Node* deleteTail = tail;
    tail = tail->prev;
    delete deleteTail;
    tail->next = nullptr;
}

void deleteAtHead(Node* &head){
    //Node* temp = head;

    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;
    head->prev = nullptr;
}

int size(Node* head){
    Node* temp = head;
    int count = 0;

    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
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

    cout << endl << "Before Deleting " << endl;
    printNormal(head);
    printReverse(tail);

    int pos;
    cout << endl << "Enter Position To Delete : ";
    cin >> pos;
    deleteAtPosition(head,pos);

    cout << endl << "After Deleting Position : " << pos << " ::" << endl;
    printNormal(head);
    printReverse(tail);

    deleteAtHead(head);

    cout << endl << "After Deleting Head " << endl;
    printNormal(head);
    printReverse(tail);

    deleteAtTail(tail);

    cout << endl << "After Deleting Tail " << endl;
    printNormal(head);
    printReverse(tail);

    
    return 0;
}