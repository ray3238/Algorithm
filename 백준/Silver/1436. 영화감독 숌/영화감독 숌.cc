#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int develTitle = 666;
    string stringTitle;
    int n;
    int check = 0;

    cin >> n;

    for (develTitle ; ; develTitle++) {
        stringTitle = to_string(develTitle);

        if (stringTitle.find("666") != -1) {
            check++;
            if (check == n) {
                cout << develTitle;
                break;
            }
        }
    }
    return 0;
}