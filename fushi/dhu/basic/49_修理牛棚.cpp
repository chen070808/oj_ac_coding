#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 210;
int a[N], d[N];
int m, c, ans, res;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    cin >> m >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a[i];
    }
    sort(a, a + c);
    for (int i = 0; i < c - 1; i++)
    {
        d[i] = a[i + 1] - a[i] - 1;
    }
    sort(d, d + c - 1, cmp);
    for (int i = 0; i < m - 1; i++)
    {
        res += d[i];
    }
    ans = a[c - 1] - a[0] - res + 1;
    printf("%d\n", ans);
    return 0;
}