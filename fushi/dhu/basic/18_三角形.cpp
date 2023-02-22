#include <iostream>
using namespace std;

int ans[] = {9, 1, 2, 3, 4, 5, 6, 7, 8};

int main()
{
    int a, n;
    int flag = 0;
    while (scanf("%d %d", &a, &n) != EOF)
    {
        if (flag)
            printf("\n");
        for (int i = 1; i <= n; i++)
        {
            printf("%d", ans[a % 9]);
            a++;
            for (int j = 1; j < i; j++)
            {
                printf(" %d", ans[a % 9]);
                a++;
            }
            printf("\n");
        }
        flag++;
    }
}