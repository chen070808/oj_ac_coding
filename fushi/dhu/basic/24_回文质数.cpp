#include <iostream>
using namespace std;

bool is_prim(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool is_palindrome(int n)
{
    int a = n;
    int b = 0;
    while (n)
    {
        b = b * 10 + n % 10;
        n /= 10;
    }
    if (a == b)
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    bool flag = true; // 标记第一个
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (is_palindrome(i) && is_prim(i))
        {
            if (flag)
            {
                printf("%d", i);
                flag = false;
            }
            else
                printf("\n%d", i);
        }
    }

    return 0;
}