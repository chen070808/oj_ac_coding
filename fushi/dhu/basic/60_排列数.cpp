#include <iostream>
using namespace std;
typedef long long ll;
ll fact(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    int m, n;
    cin >> m >> n;
    printf("%d", fact(m) / fact(m - n));
    return 0;
}