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
int main()
{
    // int r;
    // int c;
    // double g;
    // cin >> r >> c >> g;
    // Student Rahim(r, c, g);

    Student Rahim(3, 5, 4.77);
    Student Karim(12, 5, 4.99);
    Student Sakib(1, 5, 4.91);
    cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
    cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;
    cout << Sakib.roll << " " << Sakib.cls << " " << Sakib.gpa << endl;
    return 0;
}