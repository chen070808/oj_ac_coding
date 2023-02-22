#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int a, b, i;
        cin >> a >> b;
        a *= 100;
        i = b - (a % b);
        printf("%d", i);
        i += b;
        while (i < 100)
        {
            printf(" %d", i);
            i += b;
        }
        printf("\n");
    }

    return 0;
}