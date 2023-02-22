#include <iostream>
using namespace std;

// a^2+x^2=b^2+y^2 a^2-b^2=y^2-x^2

void solve(int a, int b)
{
    int num = a * a - b * b;
    for (int x = 1; x <= 100; x++)
    {
        for (int y = 1; y <= 100; y++)
        {
            if (y * y - x * x == num)
                printf("%d %d\n", x, y);
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    solve(a, b);
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        printf("\n");
        solve(a, b);
    }
    return 0;
}