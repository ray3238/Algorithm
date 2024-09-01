#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, n2;
    int n3 = 0;
    int count = 0;

    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> n2;

        for (int j = 1 ; j <= n2 ; j++) {
            if (n2 % j == 0) {
                n3++;
            }
        }
        if (n3 == 2) {
            count++;
        }
        n3 = 0;
    }

    cout << count;

    return 0;
}