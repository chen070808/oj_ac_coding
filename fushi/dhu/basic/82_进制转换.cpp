#include <iostream>
#include <string>
using namespace std;

typedef long long ll;
string ans;
ll n;
int k, a;

int main()
{
    while (cin >> n >> k)
    {
        ans.clear();
        if (n == 0)
            puts("0");
        else
        {
            while (n)
            {
                a = n % k;
                if (a < 10)
                    a = '0' + a;
                else
                    a = 'A' + a - 10;
                ans.push_back(a);
                n /= k;
            }
            for (int i = ans.size() - 1; i >= 0; i--)
                printf("%c", ans[i]);
            printf("\n");
        }
    }
    return 0;
}