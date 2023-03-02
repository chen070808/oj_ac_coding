#include <cstring>
#include <iostream>
using namespace std;

const int N = 55;
int a[N], st[N];
int n, ans;

int main()
{
    while (cin >> n)
    {
        ans = 0;
        memset(a, 0, sizeof a);
        memset(st, 0, sizeof st);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            st[i] = st[i - 1] + a[i];
        }
        for (int i = 1; i <= n; i++) // 连续1-n
        {
            for (int j = i; j <= n; j++) // 终点位置
            {
                if ((st[j] - st[j - i]) % 11 == 0)
                    ans++;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}