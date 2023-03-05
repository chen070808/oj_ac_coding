#include <cstring>
#include <iostream>
using namespace std;

int a[20][20];

int main()
{
    int n, flag = 0;
    while (cin >> n)
    {
        if (flag)
            printf("\n");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[j][i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", a[i][j]);
                if (j == n - 1)
                    printf("\n");
                else
                    printf(" ");
            }
        }
        flag = 1;
    }

    return 0;
}