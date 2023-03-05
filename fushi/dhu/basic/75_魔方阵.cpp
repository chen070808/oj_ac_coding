#include <cstring>
#include <iostream>
using namespace std;

int a[21][21];
int n, num, i, j, flag;

int main()
{
    while (cin >> n)
    {
        if (flag)
            printf("\n");
        memset(a, 0, sizeof a);
        i = 0, j = n / 2, num = 1;
        for (int k = 0; k < n * n; k++)
        {
            a[i][j] = num++;
            if (a[(i - 1 + n) % n][(j + 1 + n) % n])
                i = (i + 1 + n) % n;
            else
            {
                i = (i - 1 + n) % n;
                j = (j + 1 + n) % n;
            }
        }
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                printf("%d", a[i][j]);
                if (j == n - 1)
                    printf("\n");
                else
                    printf(" ");
            }
        flag = 1;
    }
    return 0;
}