#include <stdio.h>

int queue[10], front = -1, rear = -1;

void enqueue(int v) {
    if (rear == 9) return;
    if (front == -1) front = 0;
    queue[++rear] = v;
}

int dequeue() {
    if (front == -1) return -1;
    int v = queue[front];
    if (front == rear) front = rear = -1;
    else front++;
    return v;
}

void bfs(int graph[][10], int vertices, int start) {
    int visited[10] = {0};
    enqueue(start);
    visited[start] = 1;

    while (front != -1) {
        int current = dequeue();
        printf("%d ", current);

        for (int i = 0; i < vertices; i++) {
            if (graph[current][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int graph[10][10] = {0}, vertices, edges, u, v, start;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("Enter starting vertex for BFS: ");
    scanf("%d", &start);

    printf("BFS traversal: ");
    bfs(graph, vertices, start);
    printf("\n");

    return 0;
}
