#include <bits/stdc++.h>
using namespace std;
int ans;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n;
    cin >> s;
    int len = s.length();
    ans = 1;
    if (n == 1)
    {
        cout << s[0] << endl;
        return 0;
    }
    for (int i = 1; i < len; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
        else
            ans = 1;
        if (ans >= n)
        {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}