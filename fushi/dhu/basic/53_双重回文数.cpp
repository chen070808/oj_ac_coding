#include <iostream>
using namespace std;

typedef long long ll;

bool judge(int n, int k)
{
    ll a = n, b = 0;
    while (n)
    {
        b *= k;
        b += n % k;
        n /= k;
    }
    return a == b;
}

int main()
{
    int n, s, num;
    cin >> n >> s;
    while (n)
    {
        s++;
        num = 0;
        for (int j = 2; j <= 10; j++)
        {
            if (judge(s, j))
                num++;
            if (num == 2)
            {
                printf("%d\n", s);
                n--;
                break;
            }
        }
    }
    return 0;
}