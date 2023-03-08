#include <iostream>
#include <string>
using namespace std;

string str[2];
int t, l[2], r[2]; // 整数和小数
int f[2];          // 当前整数还是小数 0整数1小数

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> str[0] >> str[1];
        l[0] = l[1] = r[0] = r[1] = f[0] = f[1] = 0;
        for (int i = 0; i < 2; i++)
        {
            for (auto s : str[i])
            {
                if (s != '.')
                    if (f[i] == 0)
                    {
                        l[i] *= 10;
                        l[i] += s - '0';
                    }
                    else
                    {
                        r[i] *= 10;
                        r[i] += s - '0';
                    }
                else
                    f[i] = 1;
            }
        }
        for (int i = 0; i < 2; i++)
        {
            while (r[i] != 0 && r[i] % 10 == 0)
            {
                r[i] /= 10;
            }
        }

        if (l[0] == l[1] && r[0] == r[1])
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}