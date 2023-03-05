#include <iostream>
using namespace std;

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

int main()
{
    int a, b, ans;
    while (cin >> a >> b)
    {
        ans = 0;
        for (int i = a; i <= b; i++)
        {
            if (is_prime(i))
                ans++;
        }
        printf("%d\n", ans);
    }

    return 0;
}