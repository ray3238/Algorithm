#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    deque<pair<int, int>> dq;
    int n1, n2;

    cin >> n1;

    for (int i = 0 ; i < n1 ; i++) {
        cin >> n2;
        dq.push_back(make_pair(n2, i + 1));
    }

    while (!dq.empty()) {
        int value = dq.front().first;
        cout << dq.front().second << " ";
        dq.pop_front();

        if (value > 0) {
            for (int i = 0 ; i < value-1 ; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else if (value < 0) {
            for (int i = 0 ; i < (-1)*value ; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}