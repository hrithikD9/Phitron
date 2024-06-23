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

// This is a creation of a node using constructor
int main(){
    Node a(9);
    Node b(17);

    a.next = &b;

    cout << a.data << " " << a.next->data;

    return 0;
}
