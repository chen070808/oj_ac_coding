#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    long long a, b;
    while (cin >> a >> b)
    {
        if (a || b)
            cout << a + b << '\n';
        else
            return 0;
    }
    return 0;
}