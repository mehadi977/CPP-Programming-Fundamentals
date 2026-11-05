#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
Student fun()
{
    Student Rahim(2, 5, 4.33);
    return Rahim;
}
int main()
{
    Student obj = fun();
    Student Karim(4, 5, 3.55);
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;

    return 0;
}