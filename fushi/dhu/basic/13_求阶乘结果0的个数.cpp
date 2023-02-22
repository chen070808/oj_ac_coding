#include <iostream>
using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int ans = 0;
        while (n)
        {
            ans += n / 5;
            n /= 5;
        }
        printf("%d\n", ans);
    }

    return 0;
}