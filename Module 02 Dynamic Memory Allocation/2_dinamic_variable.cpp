#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 33;         //static variable      //stack memorey
    int *p = new int;   //dynamic variable     //hip memory
    *p = 123;
    cout << *p;

        return 0;
}