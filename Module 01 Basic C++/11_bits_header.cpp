#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    // pirnt min max value
    // if (a<b)

    // {
    //     cout<<a;
    // }
    // else{
    //     cout<< b;
    // }
    cout << "min= " << min(a, b) << endl;
    cout << "max= " << max(a, b) << endl;
    cout << max({2, 4, 7, 8, 1}) << endl;
    cout << min({3, 5, 3, 8}) << endl;

    // swap
    // int tmp = a;
    // a = b;
    // b = tmp;
    // cout << a << "  " << b;

    swap(a, b);
    cout << a << "  " << b << endl;

    return 0;
}