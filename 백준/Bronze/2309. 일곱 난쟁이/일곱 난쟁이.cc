#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int> vec;
    int sum = 0;
    int n1 = 0, n2 = 0;

    for (int i = 0 ; i <= 8 ; i++) {
        cin >> n;
        vec.push_back(n);
        sum += n;
    }

    sort(vec.begin(), vec.end());

    for (int i = 0 ; i <= 8 ; i++) {
        for (int j = 0 ; j <= 8 ; j++) {
            if (sum - vec[i] - vec[j] == 100) {
                n1 = vec[i];
                n2 = vec[j];
            }
        }
    }

    for (int i = 0 ; i <= 8 ; i++) {
        if (vec[i] != n1 && vec[i] != n2) {
            cout << vec[i] << '\n';
        }
    }

    return 0;
}