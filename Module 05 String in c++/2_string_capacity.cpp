#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello how";
    cout << s << endl;
    // size
    int size = s.size();
    cout << "size= " << size << endl;
    // max size
    // int msize = s.max_size();
    cout << "maxsize= " << s.max_size() << endl;
    // capacity
    int capacity = s.capacity();
    cout << "capacity= " << capacity << endl;
    // clear
    // s.clear();
    cout << "clear= " << s << endl;
    // empty
    if (s.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // resize
    s.resize(15,'k');
    cout << s << endl;

    return 0;
}