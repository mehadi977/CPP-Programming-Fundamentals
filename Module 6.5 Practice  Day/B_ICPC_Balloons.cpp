#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool visited[26] = {false};
        int cunt_bool = 0;
        for (int i = 0; i < n; i++)
        {
            char a = s[i];
            int idx = a - 'A';

            if (visited[idx] == false)
            {
                cunt_bool += 2;
                visited[idx] = true;
            }
            else
            {
                cunt_bool++;
            }
        }
        cout << cunt_bool << endl;
    }

    return 0;
}