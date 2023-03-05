#include <cstring>
#include <iostream>
using namespace std;

int a[15][15];

int main()
{
    int t, i, j, flag = 0;
    while (cin >> t)
    {
        if (flag)
            printf("\n");
        i = j = 1;
        memset(a, 0, sizeof a);
        for (int k = 1; k <= t * t; k++)
        {
            a[i][j] = k;
            if ((i == 1 || a[i - 1][j]) && !a[i][j + 1] && j < t) // 向右走
                j++;
            else if ((j == t || a[i][j + 1]) && !a[i + 1][j] && i < t) // 向下走
                i++;
            else if ((i == t || a[i + 1][j]) && !a[i][j - 1] && j > 1) // 向左走
                j--;
            else if ((j == 1 || a[i][j - 1]) && !a[i - 1][j] && i > 1) // 向上走
                i--;
        }
        for (i = 1; i <= t; i++)
            for (j = 1; j <= t; j++)
            {
                printf("%d", a[i][j]);
                if (j == t)
                    printf("\n");
                else
                    printf(" ");
            }
        flag = 1;
    }

    return 0;
}