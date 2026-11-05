#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    // s[0] = 'G';
    cout << s << endl;

    string s2 = " Hi";
    s += s2;
    cout << s << endl;

    string s3 = " Gelo";
    s.append(s3);
    cout << s << endl;

    s.push_back('A');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    return 0;
}