#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 110;
int n, flag;
struct people
{
    char name[N];
    int source_a, source_b, paper, money;
    char a, b;
} P[N];

int main()
{
    while (cin >> n)
    {
        if (flag)
            printf("\n");
        int max_n = 0, all = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> P[i].name >> P[i].source_a >> P[i].source_b >> P[i].a >> P[i].b >> P[i].paper;
            P[i].money = 0;
            auto &t = P[i];
            if (t.source_a > 80 && t.paper > 0)
                t.money += 8000;
            if (t.source_a > 85 && t.source_b > 80)
                t.money += 4000;
            if (t.source_a > 90)
                t.money += 2000;
            if (t.source_a > 85 && t.b == 'Y')
                t.money += 1000;
            if (t.source_b > 80 && t.a == 'Y')
                t.money += 850;
            if (t.money > P[max_n].money)
                max_n = i;
            all += t.money;
        }
        printf("%s\n%d\n%d\n", P[max_n].name, P[max_n].money, all);
        flag = 1;
    }

    return 0;
}