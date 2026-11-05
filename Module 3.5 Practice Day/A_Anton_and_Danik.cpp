#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout<<a[i];
    }
    int count_anton = 0;
    int count_danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A')
        {
            count_anton++;
        }
        else if (a[i] == 'D')
        {
            count_danik++;
        }
    }
    // cout << count_anton << " " << count_danik;
    if (count_anton > count_danik)
    {
        cout << "Anton";
    }
    else if (count_anton < count_danik)
    {
        cout << "Danik";
    }
    else if (count_anton == count_danik)
    {
        cout << "Friendship";
    }

    return 0;
}