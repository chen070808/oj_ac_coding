#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1010;
int a[N], f[N];
int t, n, res, i, j;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        res = 0;
        memset(a, 0, sizeof a);
        memset(f, 0, sizeof f);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            f[i] = 1;
            for (j = 0; j < i; j++)
            {
                if (a[j] <= a[i])
                    f[i] = max(f[i], f[j] + 1);
            }
            res = max(res, f[i]);
        }
        printf("%d\n", res);
    }

    return 0;
}