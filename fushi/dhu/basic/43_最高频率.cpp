#include <cstring>
#include <iostream>
using namespace std;
const int N = 120;
int num[N];

int main()
{
    int t;
    while (cin >> t)
    {
        int a, ans = 0, ans_n = 0, max_a = 0;
        memset(num, 0, sizeof num);
        for (int i = 0; i < t; i++)
        {
            cin >> a;
            num[a]++;
            max_a = max(a, max_a);
        }
        for (int i = 0; i <= max_a; i++)
        {
            if (ans_n < num[i])
            {
                ans = i;
                ans_n = num[i];
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
