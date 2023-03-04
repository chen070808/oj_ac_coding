#include <iostream>
using namespace std;

bool judge(int n)
{
    while (n)
    {
        if (n % 10 != 0 && n % 10 != 1)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int a;
    while (cin >> a)
    {
        int d = a;
        while (!judge(a))
        {
            a += d;
        }
        printf("%d\n", a);
    }
    return 0;
}