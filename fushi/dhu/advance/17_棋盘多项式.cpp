#include <iostream>
using namespace std;

const int N = 10;
int a[N][N], res, n, p;

bool judge(int x, int y) // 判断x,y位置是否可放
{
    if (a[x][y] == 0 || a[x][y] == 2)
        return false;
    int u = x, v = y;
    while (u-- && a[u][v])
    {
        if (a[u][v] == 2)
            return false;
    }
    u = x, v = y;
    while (v-- && a[u][v])
    {
        if (a[u][v] == 2)
            return false;
    }
    return true;
}

void dfs(int x, int y, int u) // 按位置考虑 当前考虑到x,y位置 放了u个
{
    if (x > n)
        return;
    if (u == p)
    {
        res++;
        return;
    }
    for (int i = y; i < n; i++)
    {
        if (judge(x, i))
        {
            a[x][i] = 2;
            dfs(x, i + 1, u + 1);
            a[x][i] = 1;
        }
    }
    dfs(x + 1, 0, u);
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    p = 1;
    dfs(0, 0, 0);
    while (res)
    {
        printf("%d\n", res);
        res = 0, p++;
        dfs(0, 0, 0);
    }
    return 0;
}