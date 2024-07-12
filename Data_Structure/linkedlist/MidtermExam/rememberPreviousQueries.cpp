#include<bits/stdc++.h>
using namespace std;

void printForward(list<int>temp){
    cout << "L -> ";
    for(auto i : temp) cout << i << " ";
    cout << "\n";
}

void printReverse(list<int>temp){
    temp.reverse();
    cout << "R -> ";
    for(auto i : temp) cout << i << " ";
    cout << "\n";
}

int main(){
    int q;
    cin >> q;

    list<int>myList;

    while(q--){
        int x , v;
        cin >> x >> v;

        if(x == 0) myList.push_front(v);
        else if(x == 1) myList.push_back(v);
        else if(x == 2){
            if(v >= 0 && v < myList.size()) myList.erase(next(myList.begin(),v));
        }
        printForward(myList);
        printReverse(myList);
    }
    return 0;
}