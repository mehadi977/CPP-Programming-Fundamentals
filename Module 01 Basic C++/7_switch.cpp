#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Sunday\n"; // if
        break;
    case 2:
        cout << "Monday\n"; // else if
        break;
    case 3:
        cout << "Tueresday\n";
        break;
    case 4:
        cout << "Wensaday\n";
        break;
    case 5:
        cout << "Thuresday\n";
        break;
    case 6:
        cout << "Friday\n";
        break;
    case 7:
        cout << "Satarday\n";
        break;

    default:
        cout << "Wrong"; //else
    }

    return 0;
}