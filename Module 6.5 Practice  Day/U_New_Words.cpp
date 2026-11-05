#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c_e = 0, c_g = 0, c_y = 0, c_p = 0, c_t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char a = s[i];
        if (a == 'e' || a == 'E')
        {
            c_e++;
        }
        if (a == 'g' || a == 'G')
        {
            c_g++;
        }
        if (a == 'y' || a == 'Y')
        {
            c_y++;
        }
        if (a == 'p' || a == 'P')
        {
            c_p++;
        }
        if (a == 't' || a == 'T')
        {
            c_t++;
        }
    }
    // cout << c_e << " " << c_g << " " << c_y << " " << c_p << " " << c_t;
    int mn = min({c_e, c_g, c_y, c_p, c_t});
    cout << mn;
    return 0;
}