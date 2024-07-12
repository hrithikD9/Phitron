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

void insert(Node* &head,Node* &tail,int data){
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

bool isPalindrome(Node* head, Node* tail) {
    while (head != nullptr && tail != nullptr && head != tail && tail->next != head) {
        if (head->data != tail->data) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int data;
    
    while(true){
        cin >> data;
        if(data == -1) break;
        insert(head, tail, data);
    }
    if (isPalindrome(head, tail)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}