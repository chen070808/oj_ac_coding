#include <iostream>
using namespace std;

double total(int n)
{
    double res = 0;

    for (int i = 1; i <= n; i++)
    {
        res = res + (1.0 / i);
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.3f\n", total(n));
    return 0;
}