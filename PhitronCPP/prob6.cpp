#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    for(int &i : a) cin >> i;

    vector<int> b(n);
    for(int &i : b) cin >> i;

    vector<int> c = b;
    c.insert(c.begin() + n , a.begin(), a.end());

    for(int i : c) cout << i << " ";

    return 0;
}