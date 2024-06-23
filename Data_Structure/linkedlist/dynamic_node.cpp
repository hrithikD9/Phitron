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
   Node *head = new Node (17); // using dynamically allocation
   Node *x = new Node (19);

   head->next = x;

   cout << head->data << " " << x->data<< " " << head->next->data << endl;

    return 0;
}
