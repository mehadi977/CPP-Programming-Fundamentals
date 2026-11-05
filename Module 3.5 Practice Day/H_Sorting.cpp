#include <bits/stdc++.h>
using namespace std;
int* srt(int n, int a[])
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    return a;
    
}
int main()
{
    int n;
    cin >> n;
    int* a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int* s = srt(n,a);
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}