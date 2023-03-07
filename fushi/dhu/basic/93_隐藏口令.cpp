#include <iostream>
#include <string>
using namespace std;

string str, tmp;
int l, len, min_l;

int main()
{
    cin >> l;
    while (len < l)
    {
        cin >> tmp;
        str += tmp;
        len = str.size();
    }
    str = str + str;
    for (int i = 0; i < len; i++)
    {
        if (str.substr(i, i + len) < str.substr(min_l, min_l + len))
            min_l = i;
    }
    printf("%d", min_l);
    return 0;
}