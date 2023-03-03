#include <iostream>
using namespace std;

const int N = 250 * 250 * 2 + 10;
int s[N]; // 标记双平方数
int n, m, a, d, i, j, flag = 1;

int main()
{
    while (cin >> n >> m)
    {
        for (i = 0; i <= m; i++)
            for (j = 0; j <= m; j++)
                s[i * i + j * j] = 1;
        int len = m * m * 2;
        for (d = 1; d <= len; d++)
        {
            for (a = 0; a + (n - 1) * d <= len; a++)
            {
                for (i = 0; i < n; i++)
                {
                    if (!s[a + i * d])
                        break;
                }
                if (i == n)
                {
                    printf("%d %d\n", a, d);
                    flag = 0;
                }
            }
        }
        if (flag)
            puts("NONE");
    }

    return 0;
}