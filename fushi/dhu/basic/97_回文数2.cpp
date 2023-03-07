#include <iostream>
#include <string>
using namespace std;

int a;

bool check_10(int n)
{
    int a = 0, b = n;
    while (n)
    {
        a *= 10;
        a += n % 10;
        n /= 10;
    }
    return a == b;
}

bool check_2(int n)
{
    string s;
    while (n)
    {
        s = s + to_string(n % 2);
        n /= 2;
    }
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }
    return true;
}

int main()
{
    while (cin >> a)
    {
        if (check_10(a) && check_2(a))
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}