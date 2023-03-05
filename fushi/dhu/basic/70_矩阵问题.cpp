#include <cstring>
#include <iostream>
using namespace std;

int n;

int main()
{
    while (cin >> n)
    {
        n = n + n + 1;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (i == j || i + j == n + 1)
                    printf("1");
                else if (i < j && i + j < n + 1)
                    printf("2");
                else if (i < j && i + j > n + 1)
                    printf("5");
                else if (i > j && i + j < n + 1)
                    printf("4");
                else if (i > j && i + j > n + 1)
                    printf("3");
                if (j < n)
                    printf(" ");
                else
                    printf("\n");
            }
    }

    return 0;
}