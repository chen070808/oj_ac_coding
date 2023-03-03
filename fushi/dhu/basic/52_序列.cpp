#include <cstring>
#include <iostream>
using namespace std;

const int N = 220;
int a[N];
int k, idx;

int main()
{
    while (cin >> k)
    {
        memset(a, 0, sizeof a);
        for (idx = 1; idx <= k; idx++)
        {
            a[idx] = idx;
            k -= idx;
        }
        if (k > 0)
        {
            for (int i = idx - 1; k; i--)
            {
                a[i]++;
                k--;
            }
        }
        for (int i = 1; i < idx; i++)
        {
            if (i == 1)
                printf("%d", a[i]);
            else
                printf(",%d", a[i]);
        }
        printf("\n");
    }

    return 0;
}