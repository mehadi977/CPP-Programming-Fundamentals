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
Student* fun()
{
 
    Student* karim =new Student(3,13,4.88);
    
    return karim;
}

int main()
{
    Student *p = fun();
  //print hobe na gerbage value ashbe 
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}