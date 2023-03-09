#include <iostream>
using namespace std;

const int N = 10;

int a[N][N], ans, n;
bool col1[N], dg1[2 * N], udg1[2 * N], col2[2 * N], dg2[2 * N], udg2[2 * N];

void dfs(int u)
{
    if (u == n)
    {
        ans++;
        return;
    }

    int x = u;
    for (int y = 0; y < n; y++)
    {
        if (a[x][y] && !col1[y] && !dg1[n - x + y] && !udg1[x + y])
        {
            col1[y] = dg1[n - x + y] = udg1[x + y] = 1;
            a[x][y] = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[x][j] && !col2[j] && !dg2[n - x + j] && !udg2[x + j])
                {
                    col2[j] = dg2[n - x + j] = udg2[x + j] = 1;
                    a[x][j] = 0;
                    dfs(u + 1);
                    a[x][j] = 1;
                    col2[j] = dg2[n - x + j] = udg2[x + j] = 0;
                }
            }
            a[x][y] = 1;
            col1[y] = dg1[n - x + y] = udg1[x + y] = 0;
        }
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    dfs(0);
    printf("%d\n", ans);
    return 0;
}