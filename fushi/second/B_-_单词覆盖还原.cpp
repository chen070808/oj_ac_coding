#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int count0 = 0;
    int count1 = 0;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y')
        {
            count0++;
        }
        if (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l')
        {
            count1++;
        }
    }

    cout << count0 << '\n'
         << count1;

    return 0;
}