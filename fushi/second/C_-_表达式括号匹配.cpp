#include <bits/stdc++.h>
using namespace std;

char st[300];
int top = 0;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    cin >> s;

    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            st[top] = s[i];
            top++;
        }

        if (s[i] == ')')
        {
            if (top == 0)
            {
                cout << "NO" << endl;
                return 0;
            }
            else
            {
                top--;
            }
        }
        if (s[i] == '@')
        {
            if (top == 0)
            {
                cout << "YES" << endl;
                return 0;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    return 0;
}