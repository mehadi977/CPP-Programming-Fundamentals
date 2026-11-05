#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    for (char c : s)
    {
        cout << c << endl;
    }

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i];
    }
    for (int b : a)
    {
        cout << b << endl;
    }

    return 0;
}