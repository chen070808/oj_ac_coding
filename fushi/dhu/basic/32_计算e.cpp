#include <iostream>
#include <vector>
using namespace std;

vector<double> rn;

void get_rn(double n)
{
    double tmp = 1;
    while (tmp >= n)
    {
        tmp = rn[rn.size() - 1] / (rn.size());
        rn.push_back(tmp);
    }
}

int main()
{
    double n, ans = 0;
    cin >> n;
    rn.push_back(1);
    rn.push_back(1);
    get_rn(n);
    for (int i = 0; i < rn.size() - 1; i++)
    {
        ans += rn[i];
    }
    if (n > 1)
        printf("%.6f %d", 0, 0);

    else
        printf("%.6f %d", ans, rn.size() - 1);
    return 0;
}