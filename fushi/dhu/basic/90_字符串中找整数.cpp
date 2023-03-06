#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> ans;
string str;
int n, flag;

int main()
{
    while (cin >> str)
    {
        n = 0;
        flag = 0;
        ans.clear();
        for (auto s : str)
        {
            if (s >= '0' && s <= '9')
            {
                n *= 10;
                n += s - '0';
                flag = 1;
            }
            else
            {
                if (flag)
                {
                    ans.push_back(n);
                    flag = 0;
                    n = 0;
                }
            }
        }
        if (flag)
            ans.push_back(n);
        printf("%d", ans.size());
        for (auto i : ans)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
}