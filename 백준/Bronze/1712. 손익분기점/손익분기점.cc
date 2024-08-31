#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int fixCost = 0, addCost = 0, price = 0;

    cin >> fixCost >> addCost >> price;
    if (price - addCost <= 0)
        cout << "-1";
    else
        cout << fixCost / (price - addCost) + 1;

    return 0;
}