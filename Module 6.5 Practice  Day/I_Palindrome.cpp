#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // int flag = 0;
    // for (int i = 0, j = s.size()-1; i < j; i++, j--)
    // {

    //     if (s[i] != s[j])
    //     {
    //         flag = 1;
    //     }
    // }
    // if (flag == 0)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    // others way:
    string r = s;
    reverse(r.begin(), r.end());
    if (r == s)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}