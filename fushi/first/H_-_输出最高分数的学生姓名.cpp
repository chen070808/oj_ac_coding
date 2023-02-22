#include <bits/stdc++.h>
using namespace std;

string so[105];

int main()
{
    ios::sync_with_stdio(false);
    int t, a;
    cin >> t;
    for (int i = 0; i < 105; i++)
    {
        so[i] = " ";
    }

    while (t--)
    {
        cin >> a;
        cin >> so[a];
    }

    for (int i = 100; i >= 0; i--)
    {
        if (so[i] != " ")
        {
            cout << so[i];
            return 0;
        }
        else
            continue;
    }

    return 0;
}