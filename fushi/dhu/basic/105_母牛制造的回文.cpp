#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

const int N = 20010;
string str;
char tmp[N];
int p[N], a[N]; // p[n]

void manacher() // 马拉车算法，str为插入'#'后的新串
{
    int mr = 0, mid;
    for (int i = 1; i < str.size(); i++)
    {
        if (i < mr)
            p[i] = min(p[mid * 2 - i], mr - i);
        else
            p[i] = 1;
        while (str[i - p[i]] == str[i + p[i]])
            p[i]++;
        if (i + p[i] > mr)
        {
            mr = i + p[i];
            mid = i;
        }
    }
}

int main()
{
    int ans = 0, idx = 0;
    char c;
    while (scanf("%c", &c) != EOF)
    {
        tmp[idx++] = c;
    }
    idx = 0;
    int len = strlen(tmp);
    str = "$";
    for (int i = 0; i < len; i++)
    {
        char &s = tmp[i];
        if (s <= 'z' && s >= 'a')
        {
            str = str + '#' + s;
            a[str.size() - 1] = i;
        }
        else if (s <= 'Z' && s >= 'A')
        {
            str = str + '#' + (char)(s + 32);
            a[str.size() - 1] = i;
        }
    }
    str = str + '#';
    manacher();
    for (int i = 0; i < str.size(); i++)
    {
        if (p[i] > ans)
        {
            ans = p[i];
            idx = i;
        }
    }
    printf("%d\n", ans - 1);
    int l = a[idx - ans + 2], r = a[idx + ans - 2];
    for (int i = l; i <= r; i++)
        printf("%c", tmp[i]);

    return 0;
}
