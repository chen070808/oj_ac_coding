#include <iostream>
using namespace std;

const int N = 110;
int ans[N];
int idx, t;
int s[4]; // 个十百千位

int main()
{
    for (int i = 34; i < 100; i++)
    {
        for (int j = 0, tmp = i * i; j < 4; j++)
        {
            s[j] = tmp % 10;
            tmp /= 10;
        }
        if (s[3] + s[1] == s[2] * s[0])
            ans[idx++] = i * i;
    }
    while (cin >> t)
    {
        printf("%d\n", ans[t - 1]);
    }

    return 0;
}