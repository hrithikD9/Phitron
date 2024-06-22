#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1]) continue;
        for(int j = 0; j < n; j++){
            if(arr[i] == (arr[j] + 1)) count ++;
        }
    }

    cout << count << "\n";

    return 0;
}
