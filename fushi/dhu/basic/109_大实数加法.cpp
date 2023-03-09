#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
        C.push_back(t % 10);
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
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, ar, al, br, bl;
        vector<int> AL, BL, AR, BR;
        cin >> a >> b;
        int l = 0, r = a.size(); // A拆分
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '.')
            {
                r = i;
                break;
            }
        }
        al = a.substr(l, r);
        if (r < a.size())
            ar = a.substr(r + 1, a.size());

        l = 0, r = b.size(); // B拆分
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == '.')
            {
                r = i;
                break;
            }
        }
        bl = b.substr(l, r);
        if (r < b.size())
            br = b.substr(r + 1, b.size());

        while (ar.size() < br.size()) // 小数补齐0
            ar = ar + '0';
        while (br.size() < ar.size())
            br = br + '0';

        for (int i = al.size() - 1; i >= 0; i--) // 字符串转数组
            AL.push_back(al[i] - '0');
        for (int i = ar.size() - 1; i >= 0; i--)
            AR.push_back(ar[i] - '0');
        for (int i = bl.size() - 1; i >= 0; i--)
            BL.push_back(bl[i] - '0');
        for (int i = br.size() - 1; i >= 0; i--)
            BR.push_back(br[i] - '0');

        vector<int> CL = add(AL, BL);
        vector<int> CR = add(AR, BR);

        if (CR.size() > AR.size()) // 小数进位
        {
            vector<int> t;
            t.push_back(CR.back());
            CL = add(CL, t);
            CR.pop_back();
        }

        int end = 0; // 记录尾0
        while (CR[end] == 0 && end < CR.size())
            end++;

        // for (auto i : CR)
        //     cout << i << " ";

        for (int i = CL.size() - 1; i >= 0; i--)
            printf("%d", CL[i]);

        if (CR.size() - end > 0)
        {
            printf(".");
            for (int i = CR.size() - 1; i >= end; i--)
                printf("%d", CR[i]);
        }
        printf("\n");
    }
    return 0;
}