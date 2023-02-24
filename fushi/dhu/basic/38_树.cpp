#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int MAXN = 10010;
int tr[MAXN];

int main()
{
    int l, m;
    while (cin >> l >> m)
    {
        int a, b, res = 0;
        memset(tr, 0, sizeof tr);
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            for (int i = a; i <= b; i++)
            {
                tr[i] = 1;
            }
        }
        for (int i = 0; i <= l; i++)
        {
            if (!tr[i])
                res++;
        }

        printf("%d\n", res);
    }

    return 0;
}