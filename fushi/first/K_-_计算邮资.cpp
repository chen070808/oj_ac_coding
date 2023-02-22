#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a;
    char c;
    cin >> a >> c;
    int num = 0;
    if (a <= 1000)
        num = 8;
    else
    {
        num = 8;
        a -= 1000;
        int u = 0;
        u = a / 500;
        if (a > u * 500)
            u = u + 1;
        num += u * 4;
    }
    if (c == 'y')
        num += 5;
    cout << num << endl;
    return 0;
}