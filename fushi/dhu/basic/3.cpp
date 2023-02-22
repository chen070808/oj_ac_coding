#include <iostream>
using namespace std;

// 2*a*x+3*b-5=0
// 2ax=5-3b
// x=(5-3b)/2a

int main()
{
    double a, b;
    while (cin >> a >> b)
    {
        printf("%.1f\n", (5.0 - 3 * b) / (2 * a));
    }
    return 0;
}