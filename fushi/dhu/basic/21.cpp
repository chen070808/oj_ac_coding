#include <iostream>
using namespace std;

int main()
{
    int n;
    // cin >> n;
    // printf("1");
    // for (int i = 2; i <= n; i++)
    // {
    //     printf("+%d", i);
    // }
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     printf("+%d", i);
    // }
    while (cin >> n)
    {
        // printf("\n1");
        printf("1");
        for (int i = 2; i <= n; i++)
        {
            printf("+%d", i);
        }
        for (int i = n - 1; i >= 1; i--)
        {
            printf("+%d", i);
        }
        printf("\n");
    }

    return 0;
}