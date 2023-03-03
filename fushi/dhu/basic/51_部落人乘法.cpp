#include <iostream>
using namespace std;
int a, b, res;

int main()
{
    while (cin >> a >> b)
    {
        res = 0;
        printf("%d*%d=", a, b);
        while (a)
        {
            if (a % 2)
            {
                res += b;
                if (a > 2)
                    printf("%d+", b);
                else
                    printf("%d=%d\n", b, res);
            }
            b *= 2;
            a /= 2;
        }
    }

    return 0;
}