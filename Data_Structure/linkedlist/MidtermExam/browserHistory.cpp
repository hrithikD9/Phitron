#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node* prev;
    string data;
    Node* next;
    
    Node(string data) {
        this->prev = nullptr;
        this->data = data;
        this->next = nullptr;
    }
};

void insert(Node* &head,Node* &tail,string data){
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

void visit(Node* &current, Node* head,string &address) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == address) {
            current = temp;
            cout << address << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node* &current) {
    if (current != nullptr && current->next != nullptr) {
        current = current->next;
        cout << current->data << endl;
    }
    else cout << "Not Available" << endl;
}

void prev(Node* &current) {
    if (current != nullptr && current->prev != nullptr) {
        current = current->prev;
        cout << current->data << endl;
    }
    else cout << "Not Available" << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    string data;
    
    
    while(true){
        cin >> data;
        if(data == "end") break;
        insert(head, tail, data);
    }

    int q;
    cin >> q;
    string command, address;
    Node* current = head;

    while (q--) {
        cin >> command;
        if (command == "visit") {
            cin >> address;
            visit(current, head, address);
        }
        else if (command == "next")  next(current);
        else if (command == "prev")  prev(current);
    }

    return 0;
}