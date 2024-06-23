#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
// Simple creation of a node where a is pointing towards b node;
int main(){
    Node a , b;

    a.data = 10;
    b.data = 20;

    a.next = &b;
    b.next = nullptr;

    cout << a.data << " " << a.next->data;

    return 0;
}
