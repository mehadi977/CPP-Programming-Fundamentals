#include <iostream>
using namespace std;
int main()
{
    int x = -8;
    (x % 2 == 0) ? cout << "even" <<endl: cout << "odd" << endl; //with ()
    x > 0 ? cout << "positive\n" : cout << "Negative" << endl;   //without ()
    return 0;
}