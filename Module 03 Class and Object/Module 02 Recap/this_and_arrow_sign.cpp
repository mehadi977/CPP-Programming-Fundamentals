#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student Rahim(2, 5, 4.98);
    Student Karim(2, 5, 4.99);
    cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
    cout << Karim.roll << "" << Karim.cls << " " << Karim.gpa << endl;

    return 0;
}