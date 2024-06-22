#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int found = s.find(x);
        while (found != -1)
        {
            s.replace(found, x.length(), "#");
            found = s.find(x, found + 1);
        }
        cout << s << endl;
    }
    return 0;
}