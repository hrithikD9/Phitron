#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define      HeHe     return 0
#define      YES      cout << "YES\n"
#define      NO       cout << "NO\n"
#define      nl         '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    vector<int> pre(n);
    pre[0] = arr[0];

    for(int i = 1; i < n; i++){
        pre[i] = arr[i] + pre[i - 1];
    }
    
    for(int i = 0; i < n; i++) cout << pre[i] << " ";

    HeHe;
}