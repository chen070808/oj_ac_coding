#include <iostream>
using namespace std;

int judge(int n)
{
    int res = 0;
    for (int i = 1; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            res += i;
            if (i != n / i)
                res += n / i;
        }
    }
    return res - n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (judge(a) == b && judge(b) == a)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}