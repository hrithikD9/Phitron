#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>myList;

    int data;
    while(true){
        cin >> data;
        if(data == -1) break;
        myList.push_back(data);
    }
    myList.sort();
    myList.unique();

    for(int i : myList) cout << i << " ";

    return 0;
}