#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int a[10][10];
int ans, res;
bool col[10]; // 当前列是否选过

void dfs(int u)
{
    if (u == 5)
    {
        ans = max(ans, res);
        return;
    }
    int x = u;
    for (int y = 0; y < 5; y++)
        if (!col[y])
        {
            col[y] = true;
            res += a[x][y];
            dfs(u + 1);
            res -= a[x][y];
            col[y] = false;
        }
}

int main()
{
    int i = 0;
    while (cin >> a[i / 5][i % 5])
    {
        i++;
        if (i == 25)
        {
            dfs(0);
            printf("%d\n", ans);
            ans = 0, res = 0;
            memset(a, 0, sizeof a);
            i = 0;
        }
    }

    return 0;
}