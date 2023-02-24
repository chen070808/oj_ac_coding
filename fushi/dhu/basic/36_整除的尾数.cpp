#include <stdio.h>

int getResult(int a, int b, int weishu[])
{
    int res = 0;
    a *= 100;
    for (int i = 0; i < 100; i++)
    {
        if ((a + i) % b == 0)
        {
            weishu[res++] = i;
        }
    }
    return res;
}
int main()
{
    int a, b, weishu[100], count, i;
    scanf("%d%d", &a, &b);
    count = getResult(a, b, weishu);
    for (i = 0; i < count; i++)
    {
        if (i > 0)

            printf(" ");

        printf("%02d", weishu[i]);
    }
    printf("\n");
    return 0;
}
