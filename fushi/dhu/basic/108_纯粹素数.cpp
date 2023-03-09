#include <iostream>
#include <math.h>
using namespace std;

const int N = 22;
int a[N], idx;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int get_len(int n)
{
    int res = 0;
    while (n)
    {
        res++;
        n /= 10;
    }
    return res;
}

bool check(int n)
{
    if (!is_prime(n))
        return false;
    else if (get_len(n) == 1)
        return true;
    else
        return check(n % (int)(pow(10, get_len(n) - 1) + 0.5));
}

int main()
{
    int t;
    a[idx++] = 1013;
    while (cin >> t)
    {
        while (idx < t)
        {
            int i = a[idx - 1] + 1;
            while (!check(i))
                i++;
            a[idx++] = i;
        }
        printf("%d\n", a[t - 1]);
    }

    return 0;
}