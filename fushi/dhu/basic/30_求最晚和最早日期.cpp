#include <iostream>
using namespace std;

struct day
{
    int y, m, d;
    bool operator<(const day &t) const
    {
        if (y < t.y)
            return true;
        else if (y == t.y && m < t.m)
            return true;
        else if (y == t.y && m == t.m && d < t.d)
            return true;
        else
            return false;
    }

    bool operator>(const day &t) const
    {
        if (y > t.y)
            return true;
        else if (y == t.y && m > t.m)
            return true;
        else if (y == t.y && m == t.m && d > t.d)
            return true;
        else
            return false;
    }
    void out()
    {

        cout << y << " " << m << " " << d << endl;
    }
} a[3]; // 最大 最小 输入

int main()
{
    int n;

    cin >> n;
    cin >> a[3].y >> a[3].m >> a[3].d;
    a[1] = a[2] = a[3];
    for (int i = 1; i < n; i++)
    {
        cin >> a[3].y >> a[3].m >> a[3].d;
        if (a[3] > a[1])
            a[1] = a[3];
        if (a[3] < a[2])
            a[2] = a[3];
    }
    printf("%d %d %d\n", a[1].y, a[1].m, a[1].d);
    printf("%d %d %d", a[2].y, a[2].m, a[2].d);
    return 0;
}
