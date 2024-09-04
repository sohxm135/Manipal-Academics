#include<stdio.h>
#define Q_SIZE 5

struct Queue {
    int front, rear;
    int q[Q_SIZE];
};

void insertq(struct Queue *queue, int item);
int delq(struct Queue *queue);
void display(struct Queue *queue);

int main(){
    struct Queue queue;
    queue.front = 0;
    queue.rear = 0;

    int choice, item;
    printf("\n1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the queue\n");
        printf("4. Exit\n");
    while (1) {
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                if (scanf("%d", &item) != 1) {
                    printf("Invalid input. Please try again.\n");
                    continue;
                }
                insertq(&queue, item);
                break;
            case 2:
                item = delq(&queue);
                if (item != -1)
                    printf("Deleted item: %d\n", item);
                else
                    printf("Queue is empty.\n");
                break;
            case 3:
                display(&queue);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void insertq(struct Queue *queue, int item) {
    if ((queue->rear + 1) % Q_SIZE == queue->front) {
        printf("Queue is full. Cannot insert %d.\n", item);
        return;
    }

    queue->q[queue->rear] = item;
    queue->rear = (queue->rear + 1) % Q_SIZE;
}

int delq(struct Queue *queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty. Cannot delete.\n");
        return -1;
    }

    int deletedItem = queue->q[queue->front];
    queue->front = (queue->front + 1) % Q_SIZE;
    return deletedItem;
}

void display(struct Queue *queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Contents:");
    int i = queue->front;
    while (i != queue->rear) {
        printf(" %d", queue->q[i]);
        i = (i + 1) % Q_SIZE;
    }
    printf("\n");
}