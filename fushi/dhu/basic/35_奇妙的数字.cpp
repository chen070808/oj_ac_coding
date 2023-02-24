#include <iostream>
using namespace std;

typedef long long LL;

LL ans[15];

int get_num(LL n)
{
    int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    int t = 0, i = 1;
    while (t < 10)
    {
        while (get_num(i) % 17 || get_num(i + 1) % 17)
        {
            i++;
        }
        ans[t++] = i;
        i++;
    }

    while (cin >> t)
    {
        printf("%d\n", ans[t - 1]);
    }
    return 0;
}