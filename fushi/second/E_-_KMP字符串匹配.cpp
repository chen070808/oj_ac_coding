#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    string s, p;
    cin >> s >> p;
    n = p.length();
    m = s.length();

    vector<int> nxt(n);
    for (int i = 1; i < n; ++i)
    {
        int j = nxt[i - 1];

        while (j && p[i] != p[j])
            j = nxt[j - 1];
        if (p[i] == p[j])
            j++;
        nxt[i] = j;
    }

    for (int i = 0, j = 0; i < m; ++i)
    {
        while (j && s[i] != p[j])
            j = nxt[j - 1];
        if (s[i] == p[j])
            j++;
        if (j == n)
        {
            cout << i - n + 1 << ' ';
            j = nxt[j - 1];
        }
    }
    cout << endl;
    return 0;
}