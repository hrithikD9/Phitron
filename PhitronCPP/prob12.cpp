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

    int n , q;
    cin >> n >> q;

    vector<int> a(n);
    for(int &i : a) cin >> i;  // O(n)

    sort(a.begin(),a.end());  // O(nlogn)

    while (q--){ // O(nlogn)
        int x; 
        cin >> x;

        int left = 0 , right = n - 1;

        bool check = false;
        while(left <= right){
            int mid = (left + right) / 2;

            if(a[mid] == x){
                check = true;
                break;
            }
            if(a[mid] < x) left = mid + 1;
            else right = mid - 1;
        }
        if(!check) cout << "not found" << "\n";
        else cout << "found" << "\n";
    }
    HeHe;
}