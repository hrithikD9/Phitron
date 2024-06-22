#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &i : a) cin >> i;

    int m;
    cin >> m;
    
    vector<int> b(m);
    for(int &j : b) cin >> j;

    int x;
    cin >> x;

    a.insert(a.begin() + x , b.begin() , b.end());

    for(int k : a) cout << k << " ";

}
