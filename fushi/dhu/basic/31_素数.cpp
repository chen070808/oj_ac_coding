#include <iostream>
using namespace std;

bool is_prime(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i <= a / i; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (is_prime(a))
            puts("yes");
        else
            puts("no");
    }

    return 0;
}