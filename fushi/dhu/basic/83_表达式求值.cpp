#include <cstring>
#include <iostream>
using namespace std;

char str[1010];
int ans, n, i, flag, len;

void cal()
{
    if (flag == 1)
    {
        ans += n;
        n = 0;
    }
    if (flag == 2)
    {
        ans -= n;
        n = 0;
    }
}

int main()
{
    while (gets(str))
    {
        ans = n = i = 0;
        i = -1;
        flag = 1;
        len = strlen(str);
        while (i++ < len)
        {
            if (str[i] == ' ')
                continue;
            if (str[i] >= '0' && str[i] <= '9')
            {
                n *= 10;
                n += str[i] - '0';
            }
            else if (str[i] == '+')
            {
                cal();
                flag = 1;
            }
            else if (str[i] == '-')
            {
                cal();
                flag = 2;
            }
        }
        cal();
        printf("%d\n", ans);
    }
    return 0;
}