#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int a, b, n = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (is_prime(i))
        {
            n++;
            printf("%d ", i);
            if (n == 10)
            {
                printf("\n");
                n = 0;
            }
        }
    }

    return 0;
}