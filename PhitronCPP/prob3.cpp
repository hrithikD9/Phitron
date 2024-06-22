#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        char temp = students[start].s;
        students[start].s = students[end].s;
        students[end].s = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}
