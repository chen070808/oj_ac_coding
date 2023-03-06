#include <iostream>
#include <string>
using namespace std;

string str;

bool judge()
{
    int i = 0, j = str.size() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
            return false;
        i++, j--;
    }
    return true;
}

int main()
{
    while (cin >> str)
    {
        if (judge())
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}