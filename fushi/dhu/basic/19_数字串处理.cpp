#include <cstring>
#include <iostream>
#include <math.h>
using namespace std;

const int N = 110;
int num[N]; // 输入数
int p[N];   // 数频次

int main()
{
    int n;
    while (cin >> n)
    {
        memset(num, 0, sizeof num);
        memset(p, 0, sizeof p);
        cin >> num[0];
        p[0] = 1;
        int max_p = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> num[i];
            if (num[i] == num[i - 1])
                p[i] = p[i - 1] + 1;
            else
                p[i] = 1;
            max_p = max(max_p, p[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i] == max_p)
            {
                cout << num[i] << " " << p[i] << "\n";
                break;
            }
        }
    }

    return 0;
}