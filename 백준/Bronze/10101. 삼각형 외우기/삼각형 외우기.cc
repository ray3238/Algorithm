#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int an1;
    int an2;
    int an3;

    cin >> an1 >> an2 >> an3;

    if (an1 == 60 & an2 == 60 & an3 == 60) {
        cout << "Equilateral";
    } else if ((an1 + an2 + an3 == 180) & (an1 == an2 | an2 == an3 | an1 == an3)) {
        cout << "Isosceles";
    } else if (an1 + an2 + an3 == 180 & an1 != an2 & an2 != an3 & an1 != an3) {
        cout << "Scalene";
    } else if (an1 + an2 + an3 != 180) {
        cout << "Error";
    }

    return 0;
}