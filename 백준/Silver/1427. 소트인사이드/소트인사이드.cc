#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sinput;

    cin >> sinput;

    for (int i = 0 ; i <= sinput.size() - 1 ; i++) {
        for (int j = 0 ; j <= sinput.size() - 1 ; j++) {
            if (sinput[i] > sinput[j]) {
                int temp = 0;
                temp = sinput[j];
                sinput[j] = sinput[i];
                sinput[i] = temp;
            }
        }
    }

    cout << sinput;
    return 0;
}