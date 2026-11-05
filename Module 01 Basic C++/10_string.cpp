#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char c[100];
    // cin >> c;
    cin.getline(c, 100);

    cout << x << endl
         << c;

    return 0;
}