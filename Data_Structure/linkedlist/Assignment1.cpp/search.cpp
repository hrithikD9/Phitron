#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int searching(Node* head , int x){
    Node* temp = head;

    int index = 0;
    while(temp != nullptr){
        index++;
        if(temp->data == x){
           return index - 1;
        }
        temp = temp->next;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = nullptr;
        Node *tail = nullptr;

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
        int x;
        cin >> x;

        int index = searching(head , x);
        cout << index << "\n";
    }

    return 0;
}