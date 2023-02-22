#include <iostream>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    double ans = a * 5;
    if (a > 120)
        ans *= 0.7;
    else if (a > 80)
        ans *= 0.8;
    else if (a > 40)
        ans *= 0.85;
    else if (a > 20)
        ans *= 0.9;
    printf("%.2f", ans);
    return 0;
}