#include <iostream>
#include <string>
using namespace std;

string str;
int ans, n, flag, res; // flag: 1+ 2- 0=

void cal()
{
    if (flag == 1)
        res += n;
    if (flag == 2)
        res -= n;
    n = 0;
}

int main()
{
    while (cin >> str)
    {
        flag = 1;
        n = res = 0;
        for (int i = 0; i < str.size(); i++)
        {
            char &a = str[i];
            if (a >= '0' && a <= '9')
            {
                n *= 10;
                n += a - '0';
            }
            else if (a == '+')
            {
                cal();
                flag = 1;
            }
            else if (a == '-')
            {
                cal();
                flag = 2;
            }
            else if (a = '=')
            {
                cal();
                flag = 0;
            }
        }
        if (res == n)
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}