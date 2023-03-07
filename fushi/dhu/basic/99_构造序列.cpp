#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        string str = "11";
        for (int i = 2; i <= n; i++) // 插入2-n
        {
            for (int j = 1; j < str.size(); j++) // 遍历位置
            {
                if ((str[j - 1] - '0') + (str[j] - '0') == i)
                {
                    str.insert(j, to_string(i));
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}