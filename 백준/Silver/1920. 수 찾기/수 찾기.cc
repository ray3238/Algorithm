#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    long long listnum, findnum;
    vector<int> listv;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> listnum;
        listv.push_back(listnum);
    }

    sort(listv.begin(), listv.end());

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> findnum;

        bool isFound = binary_search(listv.begin(), listv.end(), findnum);
        cout << isFound << "\n";
    }
    return 0;
}