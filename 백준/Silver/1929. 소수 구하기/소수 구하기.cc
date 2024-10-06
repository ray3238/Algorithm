#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numberList[1000000] = { 0, };

    int inputNum1 = 0;
    int inputNum2 = 0;

    cin >> inputNum1;
    cin >> inputNum2;

    for (int i = 2 ; i <= inputNum2 ; i++) {
        numberList[i] = i;
    }

    for (int i = 2 ; i <= inputNum2 ; i++) {
        if (numberList[i] == 0) continue;
        for (int j = i + i; j <= inputNum2 ; j += i) {
            numberList[j] = 0;
        }
    }

    for (int i = inputNum1 ; i <= inputNum2 ; i++) {
        if(numberList[i] != 0)
            cout << numberList[i] << '\n';
    }

    return 0;
}