#include <iostream>
using namespace std;

char ch[] = {'c', 'd', 'h', 's'};

int main()
{
    int n, tmp;
    while (cin >> n)
    {
        tmp = n - 1;
        for (int i = 1; i <= 13; i++)
        {

            printf("%c %d", ch[tmp / 13], tmp % 13);
            tmp += 4;
            if (i == 13)
                printf("\n");
            else
                printf(" ");
        }
    }

    return 0;
}