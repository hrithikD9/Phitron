// Question Link : https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/is-it-valid-1-1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       string s;
       cin >> s;

       stack<int>st;

       for(char c : s){
        if(!st.empty() && ((st.top() == '1' && c == '0') || (st.top() == '0' && c == '1'))){
            st.pop();
        }
       else{
        st.push(c);
       }
    }

    if(st.empty()) cout << "YES\n";
    else cout << "NO\n";
       
    }
    return 0;
}