#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int data) {
        this->prev = nullptr;
        this->data = data;
        this->next = nullptr;
    }
};

int Size(Node* head) {
    Node* temp = head;

    int count = 0;
    while(temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

Node* insertHead(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
        tail = newNode;
    } 
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    return head;
}

Node* insertTail(Node*& tail, int data) {
    Node* newNode = new Node(data);
    if(tail == nullptr) {
        tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    return tail;
}

Node* insertAny(Node*& head, Node*& tail, int data, int pos) {
    if(pos == 0) {
        return insertHead(head, tail, data);
    } 
    else if(pos == Size(head)) {
        return insertTail(tail, data);
    } 
    else {
        Node* newNode = new Node(data);
        Node* temp = head;

        for(int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        if(temp->next != nullptr) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
        newNode->prev = temp;

        if(newNode->next == nullptr) {
            tail = newNode;
        }
    }
    return head;
}

void printForward(Node* head) {
    Node* temp = head;

    cout << "L -> ";
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void printReverse(Node* tail) {
    Node* temp = tail;

    cout << "R -> ";
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << "\n";
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int q;
    cin >> q;

    while(q--) {
        int x, v;
        cin >> x >> v;

        if(x < 0 || x > Size(head))  cout << "Invalid" << endl;
        else {
            if(x == 0) insertHead(head, tail, v);
            else if(x == Size(head)) insertTail(tail, v);
            else insertAny(head, tail, v, x);

            printForward(head);
            printReverse(tail);
        }
    }

    return 0;
}