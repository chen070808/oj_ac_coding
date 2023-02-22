#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int num = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                num += j;
            }
        }
        if (num == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}