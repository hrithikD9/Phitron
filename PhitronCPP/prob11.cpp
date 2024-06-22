#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define HeHe return 0
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (ll &i : a)  cin >> i;

    vector<ll> pre(n);
     pre[0] = a[0];

    for(int i = 1; i < n; i++){
        pre[i] = a[i] + pre[i - 1];
    }
    
    for (int i = 0; i < q; i++){
        ll l, r;
        cin >> l >> r;

        l--, r--;
        ll sum;

        if(l == 0) sum = pre[r];
        else sum = pre[r] - pre[l - 1];
        
        cout << sum << nl;
    }
    HeHe;
}