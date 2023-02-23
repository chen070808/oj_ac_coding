#include <cstring>
#include <iostream>
using namespace std;
const int MAXN = 55;

int m[MAXN];

int main()
{
    int n;

    while (cin >> n)
    {
        int ans = 0;
        memset(m, 0, sizeof m);
        m[1] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i >= 3)
                m[i] += m[i - 2];
            if (i >= 4)
                m[i] += m[i - 3];
            if (i >= 5)
                m[i] += m[i - 4];
            if (i >= 7)
                m[i - 6] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            ans += m[i];
        }

        printf("%d\n", ans);
    }

    return 0;
}