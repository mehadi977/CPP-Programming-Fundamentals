#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    int bangla;
    Student(string name, int roll, int math, int english, int bangla)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
        this->bangla = bangla;
    }
    void total()
    {
        cout << name << "-> Total mark = " << math + english + bangla << endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed", 12, 85, 90, 95);
    Student rakib("Rakib Khan", 15, 90, 89, 75);
    sakib.total();
    rakib.total();

    return 0;
}