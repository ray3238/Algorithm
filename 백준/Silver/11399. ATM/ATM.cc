#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num1, num2;
    int sum1 = 0;
    int sum2 = 0;
    int count = 0;
    vector<int> vec;

    cin >> num1;

    for (int i = 0 ; i < num1 ; i++) {
        cin >> num2;
        vec.push_back(num2);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0 ; i < vec.size() ; i++) {
        for (int j = 0 ; j <= count ; j++) {
            sum1 += vec[j];
        }
        sum2 += sum1;
        sum1 = 0;
        count++;
    }

    cout << sum2;
    return 0;
}