#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t, u;
        t.append(s, 0, 3);
        u.append(s, 3, 3);
        int a = 0;
        int b = 0;
        for (int i = 0; i < 3; i++)
        {
            a += t[i] - '0';
            b += u[i] - '0';
        }
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}