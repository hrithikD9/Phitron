#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    string x = "Jessica";
    while (ss >> word){
        if(word == x){
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";

    return 0;
}