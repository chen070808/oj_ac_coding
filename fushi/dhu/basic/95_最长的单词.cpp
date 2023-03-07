#include <cstring>
#include <iostream>
using namespace std;

const int N = 1010;
char ch[N], ans[N], res[N];

int main()
{
    while (gets(ch))
    {
        memset(ans, 0, sizeof ans);
        memset(res, 0, sizeof res);
        int len = strlen(ch);
        int ans_len = 0, res_len = 0; // 答案长度和当前子串长度
        for (int i = 0; i < len; i++)
        {

            if (ch[i] == ' ')
            {
                if (res_len > ans_len)
                {
                    strcpy(ans, res); // 更新ans
                    ans_len = res_len;
                }
                memset(res, 0, sizeof res); // 清空res
                res_len = 0;
            }
            else
                res[res_len++] = ch[i];
        }
        if (res_len > ans_len) // 最后一个
        {
            strcpy(ans, res); // 更新ans
            ans_len = res_len;
        }
        printf("%d %s\n", ans_len, ans);
    }
    return 0;
}