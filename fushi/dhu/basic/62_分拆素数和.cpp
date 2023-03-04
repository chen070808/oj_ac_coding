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
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0, a;
        cin >> a;
        for (int i = 2; i < a / 2; i++)
        {
            if (is_prime(i) && is_prime(a - i))
                ans++;
        }
        printf("%d\n", ans);
    }

    return 0;
}