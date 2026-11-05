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
Student *fun()
{
    Student Rahim(2, 5, 4.33);
    Student *p = &Rahim;
    return p;
}
int main()
{
    Student *obj = fun();
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << endl;

    return 0;
}