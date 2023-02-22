#include <bits/stdc++.h>
using namespace std;

int ans[10];

void numc(long long c)
{
    while (c)
    {
        int n = c % 10;
        ans[n]++;
        c /= 10;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        numc(i);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << ans[i] << ' ';
    }

    return 0;
}