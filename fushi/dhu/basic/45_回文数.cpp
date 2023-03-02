#include <iostream>
using namespace std;

typedef unsigned int uint;
uint t, a, b, next_a;

uint get_ren(uint n)
{
    uint res = 0;
    while (n)
    {
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    uint t;
    while (cin >> t && t)
    {
        a = t;
        b = get_ren(a);
        printf("%d+%d=%d\n", a, b, (a + b));
        a = a + b;
        b = get_ren(a);
        while (a != b)
        {
            printf("%d+%d=%d\n", a, b, (a + b));
            a = a + b;
            b = get_ren(a);
        }
    }

    return 0;
}