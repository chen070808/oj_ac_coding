#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

int get_len(ll n)
{
    int len = 0;
    while (n)
    {
        len++;
        n /= 10;
    }
    return len;
}

ll solve(int t)
{
    if (t == 1)
        return 7;
    else
    {
        for (ll i = 7; i <= 1000000; i += 10)
        {
            ll n;
            n = pow(10, get_len(i) - 1) * 7 + (i / 10);
            if (n % i == 0 && n / i == t)
                return i;
        }
    }
    return 0;
}

int main()
{
    int t;
    while (scanf("%d", &t) != EOF)
    {
        ll ans = solve(t);
        if (ans)
            printf("%d\n", ans);
        else
            printf("No\n");
    }
    return 0;
}