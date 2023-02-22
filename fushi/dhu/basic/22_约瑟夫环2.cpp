#include <iostream>
using namespace std;

typedef long long ll;

const int N = 23;
int num[N];

// void print_num(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << num[i] << " ";
//     }
//     cout << endl;
// }

int solve(int k, int ans) // 模拟约瑟夫
{
    int n = 2 * k; // 共2k人
    int out = ans; // 踢出位置
    // 初始化环，符合mod 0位置为第n人
    for (int i = 1; i < n; i++) // 人员计数
    {
        num[i] = i;
    }
    num[0] = n;
    // print_num(n);
    while (n > k)
    {

        out = (out + n) % n;
        // cout << out << endl;

        if (num[out] <= k)
            return 0;
        for (int i = out; i < n - 1; i++) // 踢出第out人
        {
            num[i] = num[i + 1];
        }
        n--;
        out = out + ans - 1;
        // print_num(n);
    }

    return ans;
}

int main()
{
    int k, ans;

    while (cin >> k)
    {
        int ans = 2;
        while (solve(k, ans) == 0)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}