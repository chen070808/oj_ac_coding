#include <iostream>
#include <string>
using namespace std;

long long ans, res; // 结果和当前数
string str;

int main()
{
    while (cin >> str)
    {
        ans = res = 0;
        for (auto s : str)
        {
            if (s >= '0' && s <= '9')
            {
                res *= 10;
                res += s - '0';
            }
            else if (s == '+')
            {
                ans += res;
                res = 0;
            }
        }
        printf("%d\n", ans + res);
    }

    return 0;
}