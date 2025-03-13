#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_STACK_SIZE 1000000

char stack1[MAX_STACK_SIZE];
int top = -1;

int is_full(void) {
    return top == MAX_STACK_SIZE - 1;
}

int is_empty1(void) {
    return top == -1;
}

void push(string value) {
    if (!is_full()) {
        for (int i = 0 ; i < value.length() ; i++) {
            stack1[++top] = value[i];
        }
    }
}

void pop() {
    if (!is_full()) {
        top--;
    }
}

int cmd() {
    int countOne = 0, countTwo = 0;
    
    if (stack1[0] != '(') {
        return 0;
    }
    
    for (int i = 0 ; i <= top ; i++) {
        if (stack1[i] == '(') {
            countOne++;
        } else if (stack1[i] == ')') {
            if (stack1[i-1] == ')' && countOne <= countTwo)
                return 0;
            else
                countTwo++;
        }
    }
    
    if (countOne == countTwo)
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;
    
    string ps;
    
    for (int i = 0 ; i < num ; i++) {
        cin >> ps;
        push(ps);
        if (cmd()) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
        
        top = -1;
    }
    return 0;
}