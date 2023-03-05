#include <iostream>
using namespace std;

const int N = 22;
int a[N][N];

void init_a()
{
    for (int i = 1; i <= 20; i++)
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
}

int main()
{
    int t;
    init_a();
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
                printf("%d ", a[i][j]);
            printf("1\n");
        }
        if (t)
            printf("\n");
    }

    return 0;
}