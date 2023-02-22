#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    char c;
    int a;
    cin >> c >> a;
    if (c == 'L')
    {
        for (int i = 0; i < a; i++)
        {
            int j = 0;
            for (j = 0; j < a - i - 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < 2 * i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int i = 1; i < a; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < 2 * a - 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (c == 'Z')
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}