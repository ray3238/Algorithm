#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    unordered_set <int> set;
    
    int n, n2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> n2;
        set.emplace(n2);
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> n2;
        cout << set.count(n2) << '\n';
    }
    return 0;
}