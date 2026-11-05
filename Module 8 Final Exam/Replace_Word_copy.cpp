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
        int s_size = s.size(), x_size = x.size();
        for (int i = 0; i < s_size; i++)
        {
            int flag = 0;
            if (x_size + i <= s_size)
            {
                for (int j = 0; j < x_size; j++)
                {
                    if (s[i + j] != x[j])
                    {
                        flag = 1;
                    }
                }
            }
            else
            {
                flag = 1;
            }
            if (flag == 0)
            {
                cout << '#';
                i += x_size - 1;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}