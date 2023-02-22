#include <iostream>
using namespace std;

int main()
{
    int a, ans = 1;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        ans *= i;
        while (!(ans % 10))
        {
            ans /= 10;
        }
        ans %= 1000;
    }
    printf("%d", ans % 10);
    return 0;
}