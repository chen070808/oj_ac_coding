#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
ll a[110];
int idx;

bool is_HS(ll n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}

int get_len(ll n)
{
    int res = 0;
    while (n)
    {
        n /= 10;
        res++;
    }
    return res;
}

bool check(ll n)
{
    ll a = (pow(10, get_len(n) - 1) + 0.5);
    if (is_HS(n) && a != 1) // 只要是合数 并且还有多位
    {
        return check(n % a);
    }
    if (n == 0 || is_HS(n)) // 为0或者只剩一位
        return true;
    return false;
}

int main()
{
    int t;
    ll n;
    idx = 0;
    a[idx++] = 100;
    while (cin >> t)
    {
        while (t > idx)
        {
            n = a[idx - 1] + 1;
            while (!check(n))
                n++;
            a[idx++] = n;
        }
        printf("%d\n", a[t - 1]);
    }

    return 0;
}