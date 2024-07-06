#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> m = {1,2,3};
    list<int> n;
    n = m; // assign one list to another 

    cout << endl << "After Assigninig one list to another : ";
    for(int i : n) cout << i << " ";

    cout << endl << "Insertion of nodes :: ";
    list<int> myList = {10,20,30};
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "After Insert At Tail : ";
    myList.push_back(40); // insert in tail
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "After insert at Head : ";
    myList.push_front(0); // insert in head
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << "After inserting at any position : ";
    myList.insert(next(myList.begin(),2),99); // insert at position
    for(int i : myList) cout << i << " "; // printing
    cout << endl;

    cout << "After inserting a list / vector / array : ";
    myList.insert(next(myList.begin(),2),n.begin(),n.end());// insert a list at any position
    for(int i : myList) cout << i << " ";
    cout << endl;

    cout << endl << "Deletion of nodes :: ";
    list<int> myList2 = {10,20,30,40,50,60,70,80};
    for(int i : myList2) cout << i << " ";
    cout << endl;

    cout << "After deleting from one specific position to another : ";
    myList2.erase(next(myList2.begin(),1),next(myList2.begin(),4));
    for(int i : myList2) cout << i << " ";
    cout << endl;

    cout << "After deleting tail from list : ";
    myList2.pop_back();// delete in tail
    for(int i : myList2) cout << i << " ";
    cout << endl;

    cout << "After deleting Tail Head in list : ";
    myList2.pop_front();// delete in head
    for(int i : myList2) cout << i << " ";
    cout << endl;

    cout << "After deleting at any position : ";
    myList2.erase(next(myList2.begin(),2));//delete at position
    for(int i : myList2) cout << i << " ";//printing
    cout << endl;
    
    return 0;
}