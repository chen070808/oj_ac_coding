#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    int num = 0;
    if (a < 60)
        num++;
    if (b < 60)
        num++;
    if (c < 60)
        num++;
    if (num == 1)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}