#include <iostream>
#include <string>
using namespace std;

string str;
int ans;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        str.clear();
        ans = 0;
        cin >> str;
        for (auto s : str)
        {
            if (s >= 'a' && s <= 'z')
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}