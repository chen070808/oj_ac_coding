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
        C.push_back((t + 16) % 16);
        t /= 16;
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
            if (a[j] >= '0' && a[j] <= '9')
                A.push_back(a[j] - '0');
            else
                A.push_back(a[j] - 'a' + 10);
        for (int j = b.size() - 1; j >= 0; j--)
            if (b[j] >= '0' && b[j] <= '9')
                B.push_back(b[j] - '0');
            else
                B.push_back(b[j] - 'a' + 10);

        auto C = add(A, B);

        for (int j = C.size() - 1; j >= 0; j--)
            if (C[j] < 10)
                printf("%d", C[j]);
            else
                printf("%c", C[j] - 10 + 'a');
        printf("\n");
    }

    return 0;
}