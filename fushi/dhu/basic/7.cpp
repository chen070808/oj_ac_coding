#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d = b * b - 4 * a * c;
    printf("%.2f %.2f", (0 - b + sqrt(d)) / (2 * a), (0 - b - sqrt(d)) / (2 * a));

    return 0;
}
