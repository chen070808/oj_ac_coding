#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

const int N = 510;
int a[N], res, idx;
string str;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> str;
        memset(a, 0, sizeof a);
        idx = res = 0;
        str = str + '5';
        for (int i = 0; i < str.size(); i++)
        {
            if (i > 0 && str[i] == '5' && str[i - 1] != '5')
            {
                a[idx++] = res;
                res = 0;
            }
            else if (str[i] != '5')
            {
                res *= 10;
                res += str[i] - '0';
            }
        }
        sort(a, a + idx);
        printf("%d", a[0]);
        for (int i = 1; i < idx; i++)
            printf(" %d", a[i]);
        printf("\n");
    }

    return 0;
}