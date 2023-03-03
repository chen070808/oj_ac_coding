#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 120;
int a[N];
int n;

int main()
{
    while (cin >> n)
    {
        int tmp = 0, m = N;
        memset(a, 0, sizeof a);
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a[tmp]++;
            m = min(m, tmp);
        }
        printf("%d", m);
        for (int i = m + 1; i < N; i++)
        {
            if (a[i])
                printf(" %d", i);
        }
        printf("\n");
    }

    return 0;
}