#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int classs;
    double gpa;

    Student(char *name, int roll, int classs, double gpa)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->classs = classs;
        this->gpa = gpa;
    }
};

Student *fun()
{
    char name[100];
    int roll;
    int classs;
    double gpa;
    cin >> name >> roll >> classs >> gpa;

    Student *Hrithik = new Student(name, roll, classs, gpa);
    return Hrithik;
}

int main()
{
    Student *S1 = fun();

    cout << "Information : " << S1->name << " " << S1->classs << " " << S1->gpa << " " << S1->roll << endl;

    delete S1;

    return 0;
}