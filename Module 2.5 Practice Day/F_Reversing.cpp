#include <bits/stdc++.h>
using namespace std;
int swap(int n, int a[])
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }
    swap(n, a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}