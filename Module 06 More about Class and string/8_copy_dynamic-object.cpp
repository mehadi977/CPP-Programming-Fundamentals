#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer *dhoni = new Cricketer("India", 100);
    Cricketer *kohili = new Cricketer("india", 18);
    // kohili = dhoni;  //evabe hobe na

    // evabe korte hobe
    //  kohili->country=dhoni->country;
    //  kohili->jersey= dhoni->jersey;

    // evabeo kore jabe derefarence
    *kohili = *dhoni;

    delete dhoni;
    cout << kohili->country << " " << kohili->jersey << endl;

    return 0;
}