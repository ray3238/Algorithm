#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int n1, n2;

    int result = 0;

    for (int i = 0 ; i < n ; i++) {
        cin >> n1 >> n2;

        for (int i = n1 ; i <= n2 ; i++) {
            string str = to_string(i);
            for (int k = 0 ; k <= str.size() ; k++) {
                if (str[k] == '0') {
                    result++;
                }
            }
        }
        cout << result << '\n';
        result = 0;
    }

    return 0;
}