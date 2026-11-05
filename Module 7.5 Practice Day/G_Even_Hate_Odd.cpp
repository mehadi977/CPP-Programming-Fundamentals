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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int count_even = 0;
            int x = n / 2;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    count_even++;
                }
            }
            int ans = abs(x - count_even);
            cout << ans << endl;
        }
    }

    return 0;
}