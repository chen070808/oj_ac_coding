#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char c;
    cin >> a >> b >> c;
    if (c == '+')
    {
        printf("%.1f", a + b);
    }
    else if (c == '-')
    {
        printf("%.1f", a - b);
    }
    else if (c == '*')
    {
        printf("%.1f", a * b);
    }
    else if (c == '/')
    {
        if (b == 0)
            cout << "Wrong!" << endl;
        else
            printf("%.1f", a / b);
    }
    return 0;
}