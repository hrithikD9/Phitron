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

void removeDuplicates(Node* head) {
    if (head == nullptr) return;

    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        Node* running = current;

        while (running->next != nullptr) {
            if (running->next->data == current->data) {
                Node* duplicate = running->next;
                running->next = running->next->next;

                delete duplicate;
            } 
            else running = running->next;
        }
        current = current->next;
    }
}

void print(Node* head) {
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

        int data;
        while (true)
        {
            cin >> data;
            if (data == -1)
            {
                break;
            }
            insertAtTail(head, tail, data);
        }
    removeDuplicates(head);
    print(head);

    return 0;
}