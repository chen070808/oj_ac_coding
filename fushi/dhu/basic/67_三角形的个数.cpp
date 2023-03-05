#include <iostream>
using namespace std;

const int N = 110;
int n, a, b, c, ans;

int main()
{
    while (cin >> n)
    {
        ans = 0;
        for (a = 1; a < n; a++)
            for (b = a + 1; b < n; b++)
            {
                c = n - a - b;
                if (c > b && a + b > c && b - a < c)
                    ans++;
            }
        printf("%d\n", ans);
    }

    return 0;
}