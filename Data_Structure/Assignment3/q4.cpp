#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        queue<string>ticket;

        string command;
        cin >> command;

        if(command == "0"){
            string name;
            cin >> name;
            ticket.push(name);
        }

        else if(command == "1"){
           if(!ticket.empty()){
            cout << ticket.front() << "\n";
            ticket.pop();
           }

           else{
            cout << "Invalid" << "\n";
           }
        }
    }
    return 0;
}