#include <algorithm>
#include <iostream>
using namespace std;

typedef long long LL;
int a[11];

int main()
{
    int t;
    LL l = 0, r = 0;
    int ans = 0;
    cin >> t;
    while (t--)
    {
        ans = 0;
        for (int i = 0; i < 9; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 9; i++) // 不同位置
        {
            l = 0, r = 0;
            for (int j = 0; j < 9; j++)
            {
                l *= 10;
                l += a[(i + j) % 9];
            }
            for (int j = 8; j >= 0; j--)
            {
                r *= 10;
                r += a[(i + j) % 9];
            }
            if (abs(l - r) % 396 == 0)
                ans++;
        }
        printf("%d\n", ans);
    }

    return 0;
}