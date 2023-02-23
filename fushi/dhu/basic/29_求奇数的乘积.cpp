#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2)
            ans *= a;
    }
    printf("%d", ans);
    return 0;
}