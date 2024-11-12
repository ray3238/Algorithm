#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

bool compare1(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    double sum = 0;
    int n;
    cin >> n;
    
    vector<int> vec(n);
    map<int, int> freq_map;
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
        freq_map[vec[i]]++;
    }
    
    sort(vec.begin(), vec.end());
    
    vector<pair<int, int>> freq_vec(freq_map.begin(), freq_map.end());
    sort(freq_vec.begin(), freq_vec.end(), compare1);

    int result;
    if (freq_vec.size() > 1 && freq_vec[0].second == freq_vec[1].second) {
        result = freq_vec[1].first;
    } else {
        result = freq_vec[0].first;
    }
    
    cout << floor(sum / n + 0.5) << '\n';
    cout << vec[n / 2] << '\n';
    cout << result << '\n';
    cout << vec[n - 1] - vec[0] << '\n';

    return 0;
}