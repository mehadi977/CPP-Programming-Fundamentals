#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_mark;
    int cls;
    Student(char name[], int roll, char section, int math_mark, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_mark = math_mark;
        this->cls = cls;
    }
};
int main()
{
    Student a("Riday", 1, 'A', 99, 10);
    Student b("Rakib", 3, 'B', 97, 10);
    Student c("Limon", 4, 'C', 100, 10);
    int max = -1;
    if (a.math_mark > b.math_mark && a.math_mark > c.math_mark)
    {
        cout << a.name << " " << a.roll << " " << a.section << " " << a.math_mark << " " << a.cls;
    }
    else if (b.math_mark > c.math_mark)
    {
        cout << b.name << " " << b.roll << " " << b.section << " " << b.math_mark << " " << b.cls;
    }
    else
    {
        cout << c.name << " " << c.roll << " " << c.section << " " << c.math_mark << " " << c.cls;
    }

    return 0;
}