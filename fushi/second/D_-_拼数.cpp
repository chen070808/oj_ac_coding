#include <bits/stdc++.h>
using namespace std;
const int MAXN = 30;
string num[MAXN];

bool cmp(string a, string b)
{
    return a + b > b + a;
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << num[i];
    }

    return 0;
}