#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, a;
    while (cin >> n)
    {
        long long sum = 0;
        while (n--)
        {
            cin >> a;
            sum += a;
        }
        cout << sum << endl;
    }
    return 0;
}