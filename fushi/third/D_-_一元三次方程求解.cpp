#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-4;
double a, b, c, d;

double f(double x)
{
    return ((a * x + b) * x + c) * x + d;
}

bool check(double left, double mid)
{
    double x1 = f(left);
    double x2 = f(mid);
    return x1 * x2 < 0 ? true : false;
}

double bsearch(double left, double right)
{
    double mid;
    while (abs(right - left) > EPS)
    {
        mid = (left + right) / 2;

        if (check(left, mid))
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    return left;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d;
    for (double i = -100; i <= 100; i++)
    {
        double x1 = f(i);
        double x2 = f(i + 1 - EPS);
        if (abs(x1) < EPS)
        {
            printf("%.2f ", i);
        }
        else if (x1 * x2 < 0)
        {
            printf("%.2f ", bsearch(i, i + 1));
        }
    }

    return 0;
}