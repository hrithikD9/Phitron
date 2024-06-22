#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};
    vector<int> v2 = {10,11,12,13,14,15};

    v.insert(v.begin() + 2, v2.begin(),v2.end()); //! Insertion 
    for(int i : v) cout << i << " ";
    cout << endl;

    vector<int> v3 = {1,2,3,4,5,2,7,2,9,2}; //? Replace
    replace(v3.begin(),v3.end(),2,100);
    for(int x : v3) cout << x << " ";

    cout << endl;

    vector<int> v4 = {1,2,3,4,5,2,7,2,9,2,7,7,7,7}; //! Finding a value
    auto it = find(v4.begin(),v4.end(),7);
    if(it == v4.end()) cout << "Not Found" << endl;
    else cout << "Found" << endl;


    return 0;
}