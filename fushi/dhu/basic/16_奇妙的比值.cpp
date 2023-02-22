#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        float ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                ans += i;
        }
        printf("%.2f\n", ans / n);
    }
    return 0;
}