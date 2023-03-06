#include <iostream>
#include <string>
using namespace std;
string ch;
int ans;

int main()
{
    while (cin >> ch)
    {
        ans = 0;
        int i = 0;
        while (ch[i] != '.' && i < ch.size())
            i++;
        if (i == ch.size())
            printf("0\n");
        else
            printf("%d\n", ch.size() - i - 1);
    }

    return 0;
}