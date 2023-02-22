#include <iostream>
using namespace std;

int main()
{
    int a;
    long long ans = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
        ans += i;
    cout << ans;
    return 0;
}