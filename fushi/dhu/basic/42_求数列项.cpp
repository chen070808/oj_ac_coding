#include <iostream>
using namespace std;

long long a[55];

int main()
{
    a[0] = 0;
    a[1] = 1;
    a[2] = 5;
    for (int i = 3; i < 51; i++)
    {
        a[i] = a[i - 1] + (i - 3) * 3 + 7;
    }
    int t;
    while (cin >> t)
    {
        printf("%d\n", a[t]);
    }
    return 0;
}