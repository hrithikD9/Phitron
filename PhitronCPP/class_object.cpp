#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int grade;
    int roll;
    double cgpa;

    student(int grade, int roll, double cgpa)
    {
        this->grade = grade;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

int main()
{
    student Hrithik(12, 79, 3.40);
    student Anju(23, 56, 4.00);

    cout << "Hrithik Informattion :::  " << endl;
    cout << "Grade : " << Hrithik.grade << endl
         << "Roll : " << Hrithik.roll << endl
         << "CGPA : " << Hrithik.cgpa << endl;

    cout << endl;

    cout << "Anju Informattion :::  " << endl;
    cout << "Grade : " << Anju.grade << endl
         << "Roll : " << Anju.roll << endl
         << "CGPA : " << Anju.cgpa << endl;

    return 0;
}