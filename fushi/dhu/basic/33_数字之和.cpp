#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int ans = 0;
        while (n)
        {
            ans += n % 10;
            n /= 10;
        }
        printf("%d\n", ans);
    }

    return 0;
}