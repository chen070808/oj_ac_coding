#include <cstring>
#include <iostream>
#include <math.h>
#include <unordered_map>
using namespace std;

unordered_map<char, double> a; // a o b p
                               // 1.5,1.4,1.48,1.08

int main()
{
    int t;
    int flag = 0;
    while (cin >> t)
    {
        if (flag)
            printf("\n");
        a.clear();
        char c;
        double n;
        while (t--)
        {
            cin >> c >> n;
            a[c] += n;
        }
        printf("       apple  orange banana pineapple sum\n");
        printf("price  %-7.2f%-7.2f%-7.2f%-10.2f%-7.2f\n", 1.5 * a['a'], 1.4 * a['o'], 1.48 * a['b'], 1.08 * a['p'], 1.5 * a['a'] + 1.4 * a['o'] + 1.48 * a['b'] + 1.08 * a['p']);
        printf("weight %-7.2f%-7.2f%-7.2f%-10.2f%-7.2f\n", a['a'], a['o'], a['b'], a['p'], a['a'] + a['o'] + a['b'] + a['p']);
        flag = 1;
    }

    return 0;
}