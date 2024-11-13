#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char str[1000000];
    cin >> str;

    int num = (int)strtol(str, NULL, 16);

    cout << num;

    return 0;
}