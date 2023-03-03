#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 110;
int a[N], b[N];
int t, n, m, flag, i, j;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        flag = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + m);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                    break;
            }
            if (j == m)
            {
                printf("%d ", a[i]);
                flag = 1;
            }
        }
        if (flag)
            printf("\n");
        else
            printf("NULL\n");
    }

    return 0;
}