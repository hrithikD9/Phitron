#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char alphabets[100000];

    while (cin.getline(alphabets, sizeof(alphabets)))
    {
        char check[100000];
        int k = 0;

        for (int i = 0; alphabets[i] != '\0'; i++)
        {
            char c = alphabets[i];
            if (islower(c))
                check[k++] = c;
        }

        sort(check, check + k);

        for (int i = 0; i < k; i++)
        {
            cout << check[i];
        }
        cout << "\n";
    }

    return 0;
}
