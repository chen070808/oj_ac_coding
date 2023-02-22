#include <iostream>
using namespace std;

int main()
{
    int a;
    while (cin >> a && a)
    {

        long long ans = 0;
        int i = a; // 当前有多少瓶盖
        while (i > 2)
        {
            ans += i / 3;
            i = i % 3 + i / 3;
        }
        if (i == 2)
            ans++;
        printf("%d\n", ans);
    }

    return 0;
}