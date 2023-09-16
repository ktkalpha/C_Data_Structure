#include <stdio.h>
#include <stdlib.h>

// 이 코드는 책의 구현에서 가져 옴
// ------------------------
#define STACK_MAX 100  // ADT 4.1 size

typedef int element;

element stack[STACK_MAX];  // create(size)
// ------------------------

int top = -1;

int is_full();
int is_empty();
void push(element item);
element pop();
element peek();

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
void push(element item) {
    if (is_full()) {
        fprintf(stderr, "Stack is Full\n");
        return;
    } else
        stack[++top] = item;
}
element pop() {
    if (is_empty()) {
        fprintf(stderr, "Stack is Empty\n");
        exit(-1);
    } else
        return stack[top--];
}
element peek() {
    if (is_empty()) {
        fprintf(stderr, "Stack is Empty\n");
        exit(-1);
    }

    else
        return stack[top];
}
