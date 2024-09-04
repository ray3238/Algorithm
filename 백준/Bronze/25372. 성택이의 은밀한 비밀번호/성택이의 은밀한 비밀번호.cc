#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    string str;
    cin >> n;

    for (int i = 0 ; i < n; i++) {
        cin >> str;

        if (6 <= str.size() & str.size() <= 9) {
            cout << "yes" << '\n';
        } else
            cout << "no" << '\n';
    }

    return 0;
}