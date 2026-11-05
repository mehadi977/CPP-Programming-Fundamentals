#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int mark;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].id >> a[i].name >> a[i].section >> a[i].mark;
        }
        Student max = a[0];
        // int maxmark = a[0].mark;
        for (int i = 1; i < 3; i++)
        {
            if (a[i].mark > max.mark)
            {
                max = a[i];
                // maxmark=a[i].mark;
            }
            else if (a[i].mark == max.mark && a[i].id < max.id)
            {
                max = a[i];
                // maxmark=a[i].mark;
            }
        }
        cout << max.id << " " << max.name << " " << max.section << " " << max.mark << endl;
    }

    return 0;
}