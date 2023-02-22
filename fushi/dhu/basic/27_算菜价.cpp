#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int a;
        double n, p, ans = 0;
        cin >> a;
        while (a--)
        {
            cin >> s >> n >> p;
            ans += p * n;
        }
        printf("%.1f\n", ans);
    }
    return 0;
}