#include <bits/stdc++.h>
using namespace std;
int a[30];
int main()
{
    ios::sync_with_stdio(false);
    string str;
    cin >> str;
    for (int i = 0; i <= 26; i++)
    {
        a[i] = 0;
    }
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        a[str[i] - 'a']++;
    }
    for (int i = 0; i < len; i++)
    {
        if (a[str[i] - 'a'] == 1)
        {
            printf("%c", str[i]);
            return 0;
        }
    }
    printf("no");
    return 0;
}