#include <iostream>
#include <vector>
using namespace std;

vector<int> mul(vector<int> &A, int b)
{
    vector<int> C;
    int t = 0;
    for (int i = 0; i < A.size() || t; i++)
    {
        if (i < A.size())
            t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    while (C.size() > 1 && C.back() == 0)
        C.pop_back();
    return C;
}

int main()
{
    int a;
    while (cin >> a)
    {
        vector<int> ans = {1};
        for (int i = 1; i <= a; i++)
        {
            ans = mul(ans, i);
        }
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            printf("%d", ans[i]);
        }
        printf("\n");
    }
    return 0;
}