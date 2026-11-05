
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, t, r;
        cin >> s >> t;

        int minlen = min(s.size(), t.size());
        for (int i = 0; i < minlen; i++)
        {
            r.push_back(s[i]);
            r.push_back(t[i]);
        }
        if (s.size() > t.size())
        {
            r.append(s.begin() + minlen, s.end());
        }
        else
        {
            r.append(t.begin() + minlen, t.end());
        }
        cout << r << endl;
    }
    return 0;
}