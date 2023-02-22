#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int AH, AM, AS, BH, BM, BS;
    scanf("%d %d %d %d %d %d", &AH, &AM, &AS, &BH, &BM, &BS);
    int ansh = AH + BH, ansm = AM + BM, anss = AS + BS;
    if (anss >= 60)
    {
        anss -= 60;
        ansm++;
    }
    if (ansm >= 60)
    {
        ansm -= 60;
        ansh++;
    }
    printf("%d %d %d", ansh, ansm, anss);
    return 0;
}