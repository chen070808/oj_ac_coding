#include <iostream>
using namespace std;
int n;
char ch1[11][11], ch2[11][11], re[11][11];
bool f1() // 旋转90度
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[j][n - i + 1] != ch1[i][j])
                return false;
    return true;
}
bool f2() // 旋转180度
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[n - i + 1][n - j + 1] != ch1[i][j])
                return false;
    return true;
}
bool f3() // 旋转270度
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[n - j + 1][i] != ch1[i][j])
                return false;
    return true;
}
bool f4() // 对称
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            re[i][j] = ch1[i][n - j + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[i][j] != re[i][j])
                return false;
    return true;
}
bool f51() // 对称+旋转90度
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[j][n - i + 1] != re[i][j])
                return false;
    return true;
}
bool f52() // 对称+旋转180度
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[n - i + 1][n - j + 1] != re[i][j])
                return false;
    return true;
}
bool f53() // 对称+旋转270度
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[n - j + 1][i] != re[i][j])
                return false;
    return true;
}
bool f6() // 原样
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (ch2[i][j] != ch1[i][j])
                return false;
    return true;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> ch1[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> ch2[i][j];
    if (f1())
        puts("1");
    else if (f2())
        puts("2");
    else if (f3())
        puts("3");
    else if (f4())
        puts("4");
    else if (f51())
        puts("5");
    else if (f52())
        puts("5");
    else if (f53())
        puts("5");
    else if (f6())
        puts("6");
    else
        puts("7");

    return 0;
}
