#include <iostream>
using namespace std;
int a, b, c, d, e, f;

int main()
{
    while (cin >> a >> b >> c >> d >> e >> f)
    {
        int s = c * f;
        while (s % d || s % e || (s / d - a) % 24 || (s / e - b) % 24)
        {
            s += 24 * f;
        }
        printf("%d\n", s);
    }
    return 0;
}