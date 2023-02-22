#include <iostream>
#include <math.h>
using namespace std;

int day[] = {31, 30, 31, 30,
             31, 30, 31, 31,
             30, 31, 30, 31};

int check(int y, int m)
{
    if (m == 2)
    {
        if ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0))
            return 29;
        else
            return 28;
    }
    else
        return day[m - 1];
}

int main()
{
    int y, m, d;
    int a;
    cin >> y >> m >> d >> a;
    int ans = m + a;
    printf("%d %d %d", y + (ans / 12), ans % 12, min(d, check(y + (ans / 12), ans % 12)));
    return 0;
}