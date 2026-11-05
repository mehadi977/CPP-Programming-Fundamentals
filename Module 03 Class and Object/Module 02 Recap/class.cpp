#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student Rakib;
    cin.getline(Rakib.name, 100);
    cin >> Rakib.roll >> Rakib.gpa;
    cin.ignore();
    Student sakib;
    cin.getline(sakib.name, 100);
    cin >> sakib.roll >> sakib.gpa;
    // char tmp[100]= "Rakib";
    // strcpy(a.name,tmp);
    // a.roll = 12;
    // a.gpa = 4.54;

    cout << Rakib.name << " " << Rakib.roll << " " << Rakib.gpa << endl;
    cout << sakib.name << " " << sakib.roll << " " << sakib.gpa << endl;

    return 0;
}