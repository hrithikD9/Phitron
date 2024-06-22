#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &i : arr) cin >> i;

        bool check = true;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] <= arr[i + 1]) continue;
            else {
                check = false;
                break;
            }
        }
        if(check == true) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}