#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        LL n, a, d;
        cin >> n >> a >> d;
        LL ans = 0;
        while (d % 2 == 0 && d > 1)
        {
            ans += (n - 1);
            n += (n - 1);
            d >>= 1;
        }
        cout << ans << endl;
    }

    return 0;
}