#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello";
    // 1
    // string s("hello");
    //   cout << s << endl;
    // 2
    string s("hello", 4);
    cout << s << endl;

    // 3
    string s2 = "hello world";
    string t(s2, 4);
    cout << t << endl;

    // 4
    string s3(10, 'A');
    cout << s3 << endl;
    return 0;
}