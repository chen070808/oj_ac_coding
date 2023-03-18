#include <iostream>
#include <string>
using namespace std;
string str;

int main()
{
    int i;
    int flag = 1;
    cin >> str;
    for (i = 1; i <= str.length(); i++) // 枚举不同长度
    {
        if (str.length() % i)
            continue;
        flag = 1;
        for (int j = i; j < str.length() - i && flag; j += i) // 其他子串的起点
        {
            for (int k = 0; k < i && flag; k++) // 比较子串是否相同
            {
                if (str[k] != str[j + k])
                    flag = 0;
            }
        }
        if (flag)
        {
            printf("%d\n", str.length() / i);
            break;
        }
    }
    return 0;
}