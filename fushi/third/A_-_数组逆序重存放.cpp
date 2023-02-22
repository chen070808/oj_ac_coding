#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200;
int num[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        cin >> num[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << num[i] << ' ';
    }

    return 0;
}