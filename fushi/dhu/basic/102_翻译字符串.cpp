#include <iostream>
#include <string>
using namespace std;

string str;
int flag, n = 0;

int main()
{
    while (cin >> str)
    {
        if (flag)
            printf("\n");
        for (int i = 0; i < str.size(); i++)
        {
            char &a = str[i];
            if (a >= '0' && a <= '9')
            {
                int n = a - '0';
                str.insert(i + 1, n, str[i + 1]);
                str.erase(str.begin() + i);
                i += n;
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (i % 3 == 0 && i < str.size() - 1 && i)
                printf(" ");
            printf("%c", str[i]);
        }
        flag = 1;
    }

    return 0;
}