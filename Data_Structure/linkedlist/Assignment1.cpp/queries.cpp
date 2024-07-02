#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insertAtHead(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void deleteAtPosition(Node*& head, Node*& tail, int pos) {
    if (head == nullptr || pos < 0) return;

    if (pos == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == nullptr) tail = nullptr;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1; ++i) {
        if (temp->next == nullptr) return; 
        temp = temp->next;
    }

    if (temp->next == nullptr) return; 

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;

    if (temp->next == nullptr) tail = temp; 
    delete deleteNode;
}

void printList(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) insertAtHead(head, tail, V);
        else if (X == 1) insertAtTail(head, tail, V);        
        else if (X == 2) deleteAtPosition(head, tail, V);
        printList(head);
    }
    return 0;
}
