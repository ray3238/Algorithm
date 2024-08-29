#include<iostream>
#include<stack>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stack;
    int num = 0;
    cin >> num;

    int type = 0;
    int pushNum = 0;
    for(int i = 0 ; i < num ; i++) {
        cin >> type;
        switch (type) {
            case 1:
                cin >> pushNum;
                stack.push(pushNum);
                break;

            case 2:
                if(stack.empty()) {
                    cout << "-1" << '\n';
                } else {
                    cout << stack.top() << '\n';
                    stack.pop();
                }
                break;

            case 3:
                cout << stack.size() << '\n';
                break;

            case 4:
                if(stack.empty()) {
                    cout << "1" << '\n';
                } else {
                    cout << stack.empty() << '\n';
                }
                break;

            case 5:
                if(!stack.empty()) {
                    cout << stack.top() << '\n';
                } else {
                    cout << "-1" << '\n';
                }
                break;
        }
    }
    return 0;
}