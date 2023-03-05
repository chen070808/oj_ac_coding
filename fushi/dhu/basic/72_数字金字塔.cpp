#include <algorithm>
#include <iostream>
using namespace std;

const int N = 1010;
int a[N][N], f[N][N], n, ans;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
            f[i][j] = a[i][j] + max(f[i - 1][j], f[i - 1][j - 1]);
        }
    ans = 0;
    for (int j = 1; j <= n; j++)
        ans = max(ans, f[n][j]);

    printf("%d", ans);
    return 0;
}