#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2 * 10e5 + 20;
typedef long long LL;
LL sum[MAXN];
int num[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    LL ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        sum[i] = sum[i - 1] + num[i];
    }
    for (int i = 1; i <= n; i++)
    {
        ans += num[i] * (sum[n] - sum[i]);
    }
    cout << ans << endl;
    return 0;
}