#include <cstring>
#include <iostream>
using namespace std;

char ch[20];
char c[2];

int main()
{
    gets(ch);
    gets(c);
    int len = strlen(ch);
    for (int i = 0; i < len; i++)
    {
        if (ch[i] != c[0])
            printf("%c", ch[i]);
    }

    return 0;
}