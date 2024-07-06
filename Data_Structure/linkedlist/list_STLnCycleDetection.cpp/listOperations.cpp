#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>myList = {9,8,3,4,4,5,5,6,7,2,1};
    cout << endl << "Unsorted List :: ";
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "After removing an element from list :: ";
    myList.remove(3);
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "Sorted List in Ascending Order :: ";
    myList.sort();
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "Sorted List in Descending Order :: ";
    myList.sort(greater<int>());
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "List with unique values :: ";
    myList.unique();
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "List after reversing :: ";
    myList.reverse();
    for(int i : myList) cout << i << " ";
    cout << endl << endl;

    return 0;
}