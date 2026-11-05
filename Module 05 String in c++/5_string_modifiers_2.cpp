#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    cout << s << endl;
    string s2 = "what";
    s = s2;
    cout << s << endl;

    // s += s2;
    // cout << s << endl;
    // assign
    s.assign("gelo");
    cout << s << endl;

    string s3 = "What are";
    cout << s3 << endl;
    s3.erase(3, 3);
    cout << s3 << endl;

    string s4 = "Good boy";
    cout << s4 << endl;
    s4.replace(5, 3, "girl");
    cout << s4 << endl;

    s4.replace(5, 0, "boy and ");
    cout << s4 << endl;
    
    s4.insert(13, "good ");
    cout << s4 << endl;

    return 0;
}