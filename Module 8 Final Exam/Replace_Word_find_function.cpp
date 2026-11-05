#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        while (true)
        {
            int idx = s.find(x);
            if (idx != -1)
            {
                s.replace(idx, x.size(), "#");
            }
            else
            {
                break;
            }
        }
        cout << s << endl;
    }

    return 0;
}