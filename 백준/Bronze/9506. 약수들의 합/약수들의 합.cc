#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    vector<int> vec;
    int n1;
    int j = 1;
    int sum = 0;

    while (1) {
        cin >> n1;
        if (n1 == -1)
            break;

        for (int i = 1 ; i < n1; i++) {
            if (n1 % i == 0) {
                vec.push_back(i);
                sum += i;
            }
        }

        if (sum == n1) {
            cout << n1 << " = " << vec[0];
            while (j < vec.size()) {
                cout << " + " << vec[j];
                j++;
            }
            cout << '\n';
        } else {
            cout << n1 << " is NOT perfect." << '\n';
        }

        j = 1;
        sum = 0;
        vec.clear();
    }

    return 0;
}