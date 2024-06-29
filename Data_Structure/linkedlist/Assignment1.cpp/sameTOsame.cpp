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

void insertAtTail(Node* &head, Node* &tail ,int data){
    Node* newNode = new Node(data);

    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool compare(Node* head1, Node* head2){
    while(head1 != nullptr && head2 != nullptr){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
   return head1 == nullptr && head2 == nullptr; // if both ends equally in the null then its true
}

int main(){
    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    Node* head2 = nullptr;
    Node* tail2 = nullptr;

    int data1;
    while(true){
    cin >> data1;
    if(data1 == -1){
        break;
    }
    insertAtTail(head1, tail1 , data1);
}
    int data2;
    while(true){
    cin >> data2;
    if(data2 == -1){
        break;
    }
    insertAtTail(head2, tail2 , data2);
}
   bool check = compare(head1,head2);

   if(check == true) cout << "YES\n";
   else cout << "NO\n";

    return 0;
}