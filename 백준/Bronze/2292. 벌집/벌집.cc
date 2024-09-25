#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 1;

    cin >> n;
    n -= 1;

    if (n == 0) {
        cout << count;
    }

    while (n) {
        if (n - 6 * count <= 0) {
            count++;
            cout << count;
            break;
        }
        n -= (6 * count);
        count++;
    }
}