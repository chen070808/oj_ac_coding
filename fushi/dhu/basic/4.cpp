#include <iostream>
using namespace std;

int day[] = {31, 30, 31, 30,
             31, 30, 31, 31,
             30, 31, 30, 31};

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 2)
    {
        if ((a % 400 == 0) || (a % 4 == 0) && (a % 100 != 0))
            cout << "29" << endl;
        else
            cout << "28" << endl;
    }
    else
        cout << day[b - 1] << endl;

    return 0;
}