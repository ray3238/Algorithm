#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_STACK_SIZE 1000000

int stack1[MAX_STACK_SIZE];
int top = -1;

int is_full(void) {
    return top == MAX_STACK_SIZE - 1;
}

int is_empty1(void) {
    return top == -1;
}

int push(int value) {
    if (!is_full()) {
        return stack1[++top] = value;
    } else {
        return -1;
    }
}

void pop() {
    if (!is_full()) {
        top--;
    }
}

int cmd(int value) {
    if (!is_full() && value != 0) {
        return push(value);
    } else {
        pop();
        return 0;
    }
}

int stackSum() {
    int sum = 0;
    for (int i = 0 ; i <= top ; i++) {
        sum += stack1[i];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num, num2;
    cin >> num;
    
    for (int i = 0 ; i < num ; i++) {
        cin >> num2;
        cmd(num2);
    }
    
    cout << stackSum();

    return 0;
}