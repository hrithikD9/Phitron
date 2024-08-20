// Question Link : https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-4
#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
    vector<int>v;
    void push(int data){
        v.push_back(data);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v.back();
    }

    int size(){
        return v.size();
    }

    bool empty(){
        if(v.size() == 0) return true;
        else return false;
    }
};

class myQueue{
    public:
    list<int>l;

    void push(int data){
        l.push_back(data);
    }

    void pop(){
        l.pop_front();
    }

    int front(){
        return l.front();
    }

    int size(){
        return l.size();
    }

    bool empty(){
        return l.empty();
    }
};

int main(){
    myStack st;
    myQueue q;
    
    int n , m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    for(int j = 0; j < m; j++){
        int y;
        cin >> y;
        q.push(y);
    }

    if(n != m){
        cout << "NO\n";
    }
    else{
        bool check = true;
        while(!st.empty() && !q.empty()){
        if(st.top() != q.front()){
            cout << "NO\n";
            check = false;
            break;
        } 
        st.pop();
        q.pop();
    }
   if(check) cout << "YES\n";
}
    return 0;
}