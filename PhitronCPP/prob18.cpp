#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    bool check = false;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i+1]){
            check = true;
            break;
        }
    }
    if(check == true) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    
    return 0;
}