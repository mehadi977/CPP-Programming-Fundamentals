#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte
};
int main()
{
    // Student a;
    // a.roll = 12;
    // a.gpa = 4.9;
    // char tmp[100] = "Sakib";
    // strcpy(a.name, tmp);
    // cout << a.name << " " << a.roll << " " << a.gpa << endl;

    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}
