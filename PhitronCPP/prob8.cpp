#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    for(int &i : arr){
        if(i > 0) i = 1;
        else if(i < 0) i = 2;
    }

    for(int i : arr) cout << i << " ";

    return 0;
}