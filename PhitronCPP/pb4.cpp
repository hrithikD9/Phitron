#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int a[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int check = 0;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == s)
                    {
                        check = 1;
                        break;
                    }
                }
                if (check == 1) break;
            }
            if (check == 1) break;
        }

        if (check == 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}