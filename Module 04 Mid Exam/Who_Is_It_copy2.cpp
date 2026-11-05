#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[105];
    char section;
    int marks;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student s[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].marks;
        }
        Student max = s[0];
        for (int i = 0; i < 3; i++)
        {
            if (s[i].marks > max.marks)
            {
                max = s[i];
            }
            else if (s[i].marks == max.marks && s[i].id < max.id)
            {
                max = s[i];
            }
        }
        cout << max.id << " " << max.name << " " << max.section << " " << max.marks << endl;


    }

    return 0;
}