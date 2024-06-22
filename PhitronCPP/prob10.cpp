#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> frequency(26, 0);

    for(int c : s) frequency[c - 'a']++;

    for(int i = 0; i < 26; i++){ 
        if(frequency[i] != 0) cout << char(i + 'a') << " : " << frequency[i] << "\n";
    }

    return 0;
}
