#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string a;
    ss >> a;
    reverse(a.begin(), a.end());
    cout << a;
    while (ss >> a)
    {
        reverse(a.begin(), a.end());
        cout << " " << a;
    }

    return 0;
}