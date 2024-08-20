// Question Link : https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-ii
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;

    stack<int>a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push(x);
    }

    queue<int>b;
    for(int j = 0; j < m; j++){
        int y;
        cin >> y;
        b.push(y);
    }

    if(n != m){
        cout << "NO\n";
    }
    else{
        bool check = true;
        while(!a.empty() && !b.empty()){
        if(a.top() != b.front()){
            cout << "NO\n";
            check = false;
            break;
        } 
        a.pop();
        b.pop();
    }
   if(check) cout << "YES\n";
}
    return 0;
}