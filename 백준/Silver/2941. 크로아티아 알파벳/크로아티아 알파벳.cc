#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    int i = 0;
    int ans = 0;

    cin >> input;

    while (i < input.size()) {
        if (input[i] == 'c') {
            if (input[i + 1] == '=')
                i++;
            else if (input[i + 1] == '-')
                i++;
        } else if (input[i] == 'd') {
            if (input[i + 1] == 'z' && input[i + 2] == '=')
                i += 2;
            else if (input[i + 1] == '-')
                i++;
        } else if (input[i + 1] == 'j') {
            if (input[i] == 'l')
                i++;
            else if (input[i] == 'n')
                i++;
        } else if (input[i + 1] == '=') {
            if (input[i] == 's')
                i++;
            else if (input[i] == 'z')
                i++;
        }

        i++;
        ans++;
    }

    cout << ans;
    return 0;
}