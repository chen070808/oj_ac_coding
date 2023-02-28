#include <cstring>
#include <iostream>
using namespace std;
const int MAXN = 110;
const int INF = 0x3f3f3f3f;
int a[MAXN];
int sa[MAXN]; // 连续n个数的和
int m, n;

int main()
{
    int flag = 0;
    while (cin >> m >> n)
    {
        if (flag)
            printf("\n");
        else
            flag = 1;
        memset(sa, 0, sizeof sa);
        for (int i = 1; i <= m; i++)
        {
            cin >> a[i];
            sa[i] = a[i] + sa[i - 1];
            if (i > n)
                sa[i] -= a[i - n];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; i + j < n; j++)
            {
                sa[i] += a[m - j];
            }
        }
        int max = 0, min = INF;
        for (int i = 1; i <= m; i++)
        {
            if (sa[i] > max)
                max = sa[i];
            if (sa[i] < min)
                min = sa[i];
        }
        printf("Max=%d\nMin=%d\n", max, min);
    }
    return 0;
}