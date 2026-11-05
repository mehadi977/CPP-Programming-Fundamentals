#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << " A is big";
    }
    else if (b > c)
    {
        cout << " B is big";
    }
    else
    {
        cout << " C is big";
    }

    return 0;
}