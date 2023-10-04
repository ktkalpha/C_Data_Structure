#include <stdio.h>
#include <stdlib.h>

#define QUEUE_MAX 100

typedef int element;

typedef struct Queue
{
    element data[QUEUE_MAX];
    int rear;
    int front;
} queue;

void create(queue *q)
{
    q->rear = -1;
    q->front = -1;
}

void print_queue(queue *q)
{
    for (int i = q->front+1; i <= q->rear; i++)
    {
        printf("|%d:%d", i, q->data[i]);
    }
    printf("|\n");
}

int is_empty(queue *q)
{
    if (q->rear == -1 && q->front == -1)
        return 1;
    else
        return 0;
}

int is_full(queue *q)
{
    if (q->rear == QUEUE_MAX - 1 && q->front == QUEUE_MAX - 1)
        return 1;
    else
        return 0;
}

void enqueue(queue *q, element e)
{
    if (is_full(q))
    {
        fprintf(stderr, "queue_full");

        exit(1);
    }
    else
        q->data[++(q->rear)] = e;
}

element dequeue(queue *q)
{
    if (is_empty(q))
    {
        fprintf(stderr, "queue_empty");
        exit(1);
    }

    else
        return q->data[++(q->front)];
}

element peek(queue *q)
{

    if (is_empty(q))
    {
        fprintf(stderr, "queue_empty");
        exit(1);
    }

    else
        return q->data[q->front];
}


int main()
{
    queue q;
    create(&q);
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
}