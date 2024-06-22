#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char Name[100];
    char Section;
    int TotalMarks;

    Student() {}

    Student(char *Name, int ID, char Section, int TotalMarks)
    {
        strcpy(this->Name, Name);
        this->ID = ID;
        this->Section = Section;
        this->TotalMarks = TotalMarks;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student students[3];

        for (int i = 0; i < 3; i++)
        {
            int ID;
            char Name[100];
            char Section;
            int TotalMarks;

            cin >> ID >> Name >> Section >> TotalMarks;

            students[i] = Student(Name, ID, Section, TotalMarks);
        }

        Student bestStudent = students[0];

        for (int i = 1; i < 3; i++)
        {
            if (students[i].TotalMarks > bestStudent.TotalMarks)  bestStudent = students[i];
        
            else if ((students[i].TotalMarks == bestStudent.TotalMarks && students[i].ID < bestStudent.ID)) bestStudent = students[i];
        }

        cout << bestStudent.ID << " " << bestStudent.Name << " " << bestStudent.Section << " " << bestStudent.TotalMarks << endl;
    }

    return 0;
}
