#include <iostream>
using namespace std;

int day[] = {
    31, 28, 31, 30,
    31, 30, 31, 31,
    30, 31, 30, 31};

int main()
{
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    int ans = 0;
    for (int i = 0; i < m - 1; i++)
    {
        ans += day[i];
    }
    ans += d;
    if (m > 2 && (y % 400 == 0 || y % 4 == 0 && y % 100 != 0))
        ans++;
    printf("%d", ans);
    return 0;
}