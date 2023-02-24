#include <iostream>
using namespace std;

int md[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ans[8];

int main()
{
    int n, w = 0;
    cin >> n;
    for (int y = 1900; y < 1900 + n; y++)
    {
        if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
            md[2] = 29;
        else
            md[2] = 28;
        for (int m = 1; m <= 12; m++)
        {
            for (int d = 1; d <= md[m]; d++)
            {
                w++;
                if (w == 8)
                    w = 1;
                if (d == 13)
                    ans[w]++;
            }
        }
    }
    printf("%d %d %d %d %d %d %d", ans[6], ans[7], ans[1], ans[2], ans[3], ans[4], ans[5]);
    return 0;
}