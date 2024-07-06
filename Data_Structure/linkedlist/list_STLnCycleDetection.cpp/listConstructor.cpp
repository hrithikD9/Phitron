#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>myList; // Syntax of declaration
    
    list<int>list1 = {1,2,3,4,5}; //initializing
    list<int>list2(list1);//copying one list to another
    for(auto i : list2) cout << i << " ";
    cout << endl;

    int arr[] = {5,6,9,8,4};
    list<int>ml(arr,arr+5);//constructing list to copying array elements
    for(auto i : arr) cout << i << " ";
    cout << endl;

    vector<int> v = {77,88,99};//constructing list to copying vector elements
    list<int>myL(v.begin(),v.end());
    for(auto x : myL) cout << x << " ";
    cout << endl;

    return 0;
}