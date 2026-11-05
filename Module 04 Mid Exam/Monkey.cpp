#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    while (cin.getline(s, 100005))
    {
        int len = strlen(s);
        char t[100005];
        int idx = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
            {
                t[idx] = s[i];
                idx++;
            }
        }
        t[idx] = '\0';
        int tlen = strlen(t);
        sort(t, t + tlen);

        cout << t << endl;
    }

    return 0;
}