#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        ll n1 = 100 * a + 10 * b + c, n2 = 100 * c + 10 * b + a;
        ll n = n1 * n2;
        int ans = 0;
        printf("%ld ", n);
        while (n)
        {
            if (n % 10 == a || n % 10 == b || n % 10 == c)
                ans++;
            n /= 10;
        }
        printf("%d\n", ans);
    }
    return 0;
}