#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x > 47 && x <= 58)
    {
        cout << "IS DIGIT";
    }
    else if (x > 64 && x < 91)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (x > 96 && x < 123)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }

    return 0;
}