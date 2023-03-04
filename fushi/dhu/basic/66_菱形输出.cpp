#include <algorithm>
#include <iostream>
using namespace std;
char ch[30];

int main()
{
    int a, flag = 0;
    for (int i = 25; i >= 0; i--)
    {
        ch[i] = 'A' + 25 - i;
    }
    while (cin >> a)
    {
        if (flag)
            printf("\n");
        int tmp = 0;
        for (int i = 1; i <= (a + a - 1); i++)
        {
            for (int j = 0; j < abs(a - i); j++) // a-i/i-a个空格
                printf(" ");
            printf("%c", ch[(tmp++) % 26]);
            if (i == 1 || i == (a + a - 1)) // 第一行或最后一行只有一个
                printf("\n");
            else
            {
                for (int j = 0; j < -3 + 2 * (a - abs(a - i)); j++)
                    printf(" ");
                printf("%c\n", ch[(tmp++) % 26]);
            }
        }
        flag = 1;
    }
    return 0;
}