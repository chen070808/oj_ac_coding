#include <iostream>
using namespace std;

/*90~100为A;

80~89为B;

70~79为C;

60~69为D;

0~59为E;
*/

int main()
{
    int a;
    scanf("%d", &a);
    if (a > 100 || a < 0)
        printf("Score is error!\n");
    else if (a >= 90)
        printf("A\n");
    else if (a >= 80)
        printf("B\n");
    else if (a >= 70)
        printf("C\n");
    else if (a >= 60)
        printf("D\n");
    else
        printf("E\n");

    return 0;
}