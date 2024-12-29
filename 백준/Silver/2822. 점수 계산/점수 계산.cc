#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;
    vector<int> result;
    vector<int> result2;
    int n;
    int sum = 0;

    for (int i = 0 ; i < 8 ; i++) {
        cin >> n;
        vec.push_back(n);
        result.push_back(n);
    }

    sort(vec.begin(), vec.end());

    for (int i = 7; i > 2; i--) {
        if(find(result.begin(), result.end(), vec[i]) != result.end()) {
            sum += result[find(result.begin(), result.end(), vec[i]) - result.begin()];
            result2.push_back(find(result.begin(), result.end(), vec[i]) - result.begin() + 1);
        }
    }

    sort(result2.begin(), result2.end());

    cout << sum << '\n';
    for (int i = 0 ; i < result2.size() ; i++) {
        cout << result2[i] << " ";
    }

    return 0;
}