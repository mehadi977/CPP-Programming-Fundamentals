#include <bits/stdc++.h>
using namespace std;
void min()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int small = LONG_LONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long int sum = a[i] + a[j] + (j - i);
                if (sum < small)
                {
                    small = sum;
                }
            }
        }
        cout << small << endl;
    }
}
int main()
{
    min();
    return 0;
}