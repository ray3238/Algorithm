#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main() {
    stack<int> a;
    int n, n2;
    int count = 1;
    cin >> n;

    while (n--) {
        cin >> n2;

        if (n2 == count) {
            count++;
        } else {
            a.push(n2);
        }

        while (!a.empty() && a.top() == count) {
            a.pop();
            count++;
        }
    }

    if (a.empty()) {
        cout << "Nice";
    } else {
        cout << "Sad";
    }

    return 0;
}