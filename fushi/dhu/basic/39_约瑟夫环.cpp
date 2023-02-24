#include <iostream>
using namespace std;
const int MAXN = 110;
int num[MAXN];
int n, x;

int main()
{
    while (cin >> n >> x)
    {

        for (int i = 1; i < n; i++)
        {
            num[i] = i;
        }
        num[0] = n;
        int out = x % n;
        while (n)
        {
            if (n > 1)
                printf("%d ", num[out]);
            else
            {
                printf("%d\n", num[out]);
                n--;
                continue;
            }
            for (int i = out; i <= n - 1; i++)
            {
                num[i] = num[i + 1];
            }
            n--;
            out = (out + x - 1) % n;
        }
    }

    return 0;
}