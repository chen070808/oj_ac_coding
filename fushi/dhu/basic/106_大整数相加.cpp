#include <iostream>
#include <string>
#include <vector>
using namespace std;

int t;

vector<int> add(vector<int> &A, vector<int> &B)
{
    if (A.size() < B.size())
        return add(B, A);

    vector<int> C;
    int t = 0;
    for (int i = 0; i < A.size(); i++)
    {
        t += A[i];
        if (i < B.size())
            t += B[i];
        C.push_back((t + 10) % 10);
        t /= 10;
    }
    if (t)
        C.push_back(t);

    while (C.size() > 1 && C.back() == 0)
        C.pop_back();
    return C;
}

int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<int> A, B;
        string a, b;
        cin >> a >> b;
        for (int j = a.size() - 1; j >= 0; j--)
            A.push_back(a[j] - '0');
        for (int j = b.size() - 1; j >= 0; j--)
            B.push_back(b[j] - '0');

        auto C = add(A, B);

        printf("Case %d:\n", i);
        printf("%s + %s = ", a.c_str(), b.c_str());
        for (int j = C.size() - 1; j >= 0; j--)
            printf("%d", C[j]);
        printf("\n");
        if (i != t)
            printf("\n");
    }

    return 0;
}