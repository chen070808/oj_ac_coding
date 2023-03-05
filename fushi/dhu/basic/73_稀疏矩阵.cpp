#include <cstring>
#include <iostream>
using namespace std;

const int N = 22;
int a[N][N];
int m, n, flag;

int main()
{

    while (cin >> m >> n)
    {
        if (flag)
            printf("\n");
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (a[i][j])
                    printf("%d %d %d\n", i, j, a[i][j]);
            }
        }
        flag = 1;
    }
    return 0;
}