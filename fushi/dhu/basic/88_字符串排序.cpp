#include <cstring>
#include <iostream>
using namespace std;

char ch[110];
int a[30];

int main()
{
    while (cin >> ch)
    {
        memset(a, 0, sizeof a);
        int len = strlen(ch);
        for (int i = 0; i < len; i++)
            a[ch[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            while (a[i]--)
                printf("%c", i + 'a');
        printf("\n");
    }
    return 0;
}