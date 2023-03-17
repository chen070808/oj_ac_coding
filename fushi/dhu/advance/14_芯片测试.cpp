#include <iostream>
using namespace std;

const int N = 22;
int a[N][N], res[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            res[j] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (res[i] - 1 >= n / 2)
            printf("%d ", i + 1);
    }

    return 0;
}