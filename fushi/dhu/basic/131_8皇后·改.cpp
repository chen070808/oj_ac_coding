#include <algorithm>
#include <iostream>
using namespace std;

const int N = 10;
int a[N][N], col[N], dg[2 * N], udg[2 * N];
int ans, res;

void dfs(int u)
{
    if (u == 8)
    {
        ans = max(ans, res);
        return;
    }
    int x = u;
    for (int y = 0; y < 8; y++)
        if (!col[y] && !dg[8 - x + y] && !udg[x + y])
        {
            col[y] = dg[8 - x + y] = udg[x + y] = 1;
            res += a[x][y];
            dfs(u + 1);
            res -= a[x][y];
            col[y] = dg[8 - x + y] = udg[x + y] = 0;
        }
}

int main()
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            scanf("%d", &a[i][j]);
    dfs(0);
    printf("%d\n", ans);
}
