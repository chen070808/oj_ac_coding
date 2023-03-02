#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 22, INF = 0x3f3f3f3f;
int a[N], st[N];
int l1, l2, n, ans;

int main()
{
    while (cin >> n >> l1 >> l2)
    {
        memset(a, 0, sizeof a);
        memset(st, 0, sizeof st);
        ans = -INF;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            st[i] = st[i - 1] + a[i];
        }
        for (int i = l1; i <= l2; i++)
        {
            for (int j = i; j <= n; j++)
            {
                ans = max(ans, st[j] - st[j - i]);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}