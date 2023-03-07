#include <iostream>
#include <string>
using namespace std;

string a, b;

int main()
{
    while (cin >> a >> b)
        printf("%d\n", a.find(b) + 1);
    return 0;
}