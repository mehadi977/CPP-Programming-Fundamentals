#include <bits/stdc++.h>
using namespace std;
int main()
{
    //reverse an array
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // array revarse
    //  for (int i = 0, j = n - 1; i < j; i++, j--)
    //  {
    //      int tmp = a[i];
    //      a[i] = a[j];
    //      a[j] = tmp;
    //  }
    //  reverse with function
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    //recerse aa string
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    cout << s;
    return 0;
}