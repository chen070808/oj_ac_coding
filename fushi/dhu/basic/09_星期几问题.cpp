#include <iostream>
#include <string>
using namespace std;

const string s[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main()
{
    int a;
    scanf("%d", &a);

    printf("%s", s[a].c_str());
    return 0;
}