#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    // int x = 3;
    // p = &x;
    int *x = new int;
    *x = 333;
    p = x;
    cout << "fun  " << *p << endl;
}
int main()
{
    fun();
    cout << "main  " << *p << endl;

    return 0;
}