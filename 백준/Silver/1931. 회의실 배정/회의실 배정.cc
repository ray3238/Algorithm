#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sf(const pair<int, int>&a, const pair<int, int>&b) {
    if (a.second != b.second) {
        return  a.second < b.second;
    }
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int>> vec;
    int n, a, b;

    cin >> n;

    for (int i = 0 ; i < n ; i++) {
        cin >> a >> b;
        vec.push_back(pair<int, int>(a, b));
    }

    sort(vec.begin(), vec.end(), sf);

    int time = -1;
    int count = 0;

    for (int i = 0 ; i < n ; i++) {
        if (vec[i].first >= time) {
            count++;
            time = vec[i].second;
        }
    }

    cout << count;
    return 0;
}