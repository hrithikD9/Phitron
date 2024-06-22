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

    int t;
    cin >> t;

    while (t--)
    {
        string a , b;
        cin >> a >> b;

        char x = a[0];
        a[0] = b[0];
        b[0] = x;

        cout << a << " " << b << "\n";
    }
    HeHe;
}