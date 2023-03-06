#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef pair<int, int> PII;
string str;
vector<PII> p1, p2;
int w1, w2, l1, l2;

void judge()
{
    if (max(w1, l1) >= 11 && abs(w1 - l1) >= 2)
    {
        p1.push_back({w1, l1});
        w1 = l1 = 0;
    }
    if (max(w2, l2) >= 21 && abs(w2 - l2) >= 2)
    {
        p2.push_back({w2, l2});
        w2 = l2 = 0;
    }
}

int main()
{
    int flag = 0;
    p1.clear();
    p2.clear();
    str.clear();
    w1 = w2 = l1 = l2 = 0;
    while (cin >> str)
    {

        for (auto s : str)
        {
            if (s == 'W')
            {
                w1++;
                w2++;
            }
            if (s == 'L')
            {
                l1++;
                l2++;
            }
            if (s == 'E')
            {
                if (w1 || l1) // dhu 增加此句
                    p1.push_back({w1, l1});
                if (w2 || l2) // dhu 增加此句
                    p2.push_back({w2, l2});
                if (flag)
                    printf("\n");
                for (auto i : p1)
                    printf("%d:%d\n", i.first, i.second);
                printf("\n");
                for (auto i : p2)
                    printf("%d:%d\n", i.first, i.second);
                flag = 1;
                p1.clear();
                p2.clear();
                str.clear();
                w1 = w2 = l1 = l2 = 0;
                break;
            }
            judge();
        }
    }

    return 0;
}