#include <iostream>
using namespace std;

int day[] = {0, 31, 28, 31, 30,
             31, 30, 31, 31,
             30, 31, 30, 31};
int y, m, d, n;
int main()
{
    cin >> y >> m >> d >> n;
    while (n--)
    {
        d++;
        if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
            day[2] = 29;
        else
            day[2] = 28;
        if (d > day[m])
        {
            d = 1;
            m++;
        }
        if (m > 12)
        {
            m = 1;
            y++;
        }
    }
    printf("%d %d %d", y, m, d);
    return 0;
}