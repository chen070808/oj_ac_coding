#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string str;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int to_int(int i, int l)
{
    int res = 0;
    while (l--)
    {
        res *= 10;
        res += str[i++] - '0';
    }
    return res;
}

int main()
{
    while (cin >> str)
    {
        int l = min(4, (int)str.size()); // 迭代子串长度
        int ans = 0, num = 0;
        while (l)
        {
            for (int i = 0; i <= str.size() - l; i++)
            {
                num = to_int(i, l);
                if (is_prime(num))
                {
                    ans = max(ans, num);
                }
            }
            if (ans)
                break;
            l--;
        }
        printf("%d\n", ans);
    }

    return 0;
}