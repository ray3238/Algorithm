#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    int count = 0;

    cin >> sum;

    while (sum != 1000) {
        if (sum + 500 <= 1000) {
            sum += 500;
            count++;
        } else if (sum + 100 <= 1000) {
            sum += 100;
            count++;
        } else if (sum + 50 <= 1000) {
            sum += 50;
            count++;
        } else if (sum + 10 <= 1000) {
            sum += 10;
            count++;
        } else if (sum + 5 <= 1000) {
            sum += 5;
            count++;
        } else if (sum + 1 <= 1000) {
            sum += 1;
            count++;
        }
    }

    cout << count;
    return 0;
}