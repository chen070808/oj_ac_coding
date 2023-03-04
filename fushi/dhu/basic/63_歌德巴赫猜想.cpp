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
        int a;
        cin >> a;
        for (int i = 2; i < a; i++)
        {
            if (is_prime(i) && is_prime(a - i))
            {
                printf("%d %d\n", i, a - i);
                break;
            }
        }
    }

    return 0;
}