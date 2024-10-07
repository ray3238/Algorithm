#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num1, num2;
    int num3;
    int count1 = 0;
    int count2 = 0;

    cin >> num1 >> num2;

    vector<int> numberList;

    for (int i = 0 ; i < num1 ; i++) {
        cin >> num3;
        numberList.push_back(num3);
    }

    sort(numberList.begin(), numberList.end(), greater<int>());

    while (num2 != 0) {
        if (num2 >= numberList[count1]) {
            num2 -= numberList[count1];
            count2++;
        } else
            count1++;
    }

    cout << count2;
    return 0;
}