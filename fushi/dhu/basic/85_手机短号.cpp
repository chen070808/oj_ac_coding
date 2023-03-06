#include <cstring>
#include <iostream>
using namespace std;

char ch[20];
int t;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> ch;
        int len = strlen(ch);
        printf("6");
        for (int i = len - 5; i < len; i++)
        {
            printf("%c", ch[i]);
        }
        printf("\n");
    }

    return 0;
}