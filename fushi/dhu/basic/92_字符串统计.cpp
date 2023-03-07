#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int s1[30], s2[30], flag;
string str1, str2;

int main()
{
    while (cin >> str1 >> str2)
    {
        if (flag)
            printf("\n");
        memset(s1, 0, sizeof s1);
        memset(s2, 0, sizeof s2);
        for (auto s : str1)
            s1[s - 'a']++;
        for (auto s : str2)
            s2[s - 'a']++;

        printf("in s1 or s2:");
        for (int i = 0; i < 26; i++)
        {
            if (s1[i] || s2[i])
                printf("%c", 'a' + i);
        }

        printf("\nin s1 and s2:");
        for (int i = 0; i < 26; i++)
        {
            if (s1[i] && s2[i])
                printf("%c", 'a' + i);
        }

        printf("\nin s1 but not in s2 ,or in s2 but not in s1:");
        for (int i = 0; i < 26; i++)
        {
            if ((s1[i] && !s2[i]) || (!s1[i] && s2[i]))
                printf("%c", 'a' + i);
        }

        printf("\nnot in s1 and s2:");
        for (int i = 0; i < 26; i++)
        {
            if (!s1[i] && !s2[i])
                printf("%c", 'a' + i);
        }
        printf("\n");
        flag = 1;
    }
    return 0;
}