#include <algorithm>
#include <iostream>
using namespace std;

int g[3], s[3], a[3][3], r[4], res;

int main()
{
    for (int i = 0; i < 3; i++)
        cin >> g[i];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    if (g[0] + g[1] + g[2] == 0)
        puts("0 0 0 0");
    else
    {
        res = 310;
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                for (int k = 0; k < 100; k++)
                {
                    if (i + j + k == 0)
                        continue;
                    s[0] = i * a[0][0] + j * a[1][0] + k * a[2][0];
                    s[1] = i * a[0][1] + j * a[1][1] + k * a[2][1];
                    s[2] = i * a[0][2] + j * a[1][2] + k * a[2][2];
                    int t = (s[0] + s[1] + s[2]) / (g[0] + g[1] + g[2]);
                    if (s[0] == t * g[0] && s[1] == t * g[1] && s[2] == t * g[2])
                    {
                        int n = i + j + k;
                        if (n < res)
                        {
                            res = n;
                            r[0] = i, r[1] = j, r[2] = k, r[3] = t;
                        }
                    }
                }
        if (res > 300)
            puts("NONE");
        else
            printf("%d %d %d %d\n", r[0], r[1], r[2], r[3]);
    }
    return 0;
}