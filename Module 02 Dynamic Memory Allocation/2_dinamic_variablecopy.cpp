#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 100;       // static variable
    int *p = new int;  // dynamic variable
    *p = 333;

    cout << x << endl;  //print static variable 
    cout << *p << endl; //print dynamic variable
    return 0;
}