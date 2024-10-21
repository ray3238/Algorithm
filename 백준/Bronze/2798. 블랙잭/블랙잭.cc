#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, target, result = 0;
    int sum = 0;
    int min = 9999999;
    int arr[100] = {0, };
    cin >> n >> target;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0 ; i < n-2 ; i++) {
        for(int j = i + 1 ; j < n - 1; j++) {
            for(int k = j + 1 ; k < n ; k++) {
                sum = arr[i] + arr[j] + arr[k];

                if(target - sum < min && target - sum >= 0) {
                    min = target - sum;
                    result = sum;
                }
            }
        }
    }
    cout << result;
}