#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputTree(){
   int data;
   cin >> data;
   Node* root;

   if(data == -1) root = nullptr; // checking if the root data is given or not 
   else root = new Node(data);

   queue<Node*>q;
   if(root) q.push(root);
   
   while(!q.empty()){
    //1st
    Node* p = q.front();
    q.pop();

    //2nd 
    int l , r;
    cin >> l >> r;

    Node* leftC;
    Node* rightC;

    if(l == -1) leftC = nullptr;
    else leftC = new Node(l);

    if(r == -1) rightC = nullptr;
    else rightC = new Node(r);

    // Connecting to parents
    p->left = leftC;
    p->right = rightC;

    //3rd
    if(p->left) q.push(p->left);
    if(p->right) q.push(p->right);

   }
   return root;
}

void levelOrder(Node* root){

    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        // 1st Procedure
        Node* f = q.front(); // take the first node
        q.pop(); // kick out first node

        // 2nd procedure
        cout << f->data << " ";
        
        //3rd procedure
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
   
}

int main(){
   Node* root = inputTree();
   levelOrder(root);

    return 0;
}