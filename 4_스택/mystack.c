#include <stdio.h>

// 이 코드는 책의 구현에서 가져 옴
// ------------------------
#define STACK_MAX 100  // ADT 4.1 size

typedef int element;

element stack[STACK_MAX];  // create(size)
// ------------------------

int top = -1;

int is_full();
int is_empty();
int push(element item);
int pop();
int peek();

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
}

int is_full() {
    if (top >= STACK_MAX - 1)
        return 1;
    else
        return 0;
}
int is_empty() {
    if (top == -1)
        return 1;

    else
        return 0;
}
int push(element item) {
    if (is_full())
        return -1;
    else
        stack[++top] = item;
}
int pop() {
    if (is_empty())
        return -1;
    else
        return stack[top--];
}
int peek() {
    if (is_empty())
        return -1;

    else
        return stack[top];
}
