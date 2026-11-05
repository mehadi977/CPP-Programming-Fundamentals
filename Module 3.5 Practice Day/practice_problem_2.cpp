#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_number;
    char country[100];
};
int main()
{
    Cricketer *riyad = new Cricketer;
    riyad->jersey_number = 30;
    char tr[100] = "Bangladesh";
    strcpy(riyad->country, tr);

    Cricketer *musfiqu = new Cricketer;
    musfiqu->jersey_number = 15;
    char tm[100] = "Ban";
    strcpy(musfiqu->country, tm);

    // musfiqu = riyad;

    musfiqu->jersey_number = riyad->jersey_number;
    strcpy(musfiqu->country, riyad->country);
    delete riyad;
    // cout << riyad->jersey_number << " " << riyad->country << endl;
    cout << musfiqu->jersey_number << " " << musfiqu->country << endl;

    return 0;
}