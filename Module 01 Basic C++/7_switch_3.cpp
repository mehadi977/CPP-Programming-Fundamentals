#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    cout << c<< "= ";
    switch (c)
    {
    case 'a':
        cout << "Voiel";
        break;
    case 'e':
        cout << "Voiel";
        break;
    case 'i':
        cout << "Voiel";
        break;
    case 'o':
        cout << "Voiel";
        break;
    case 'u':
        cout << "Voiel";
        break;

    default:
    cout << "Constant";
        break;
    }

    return 0;
}