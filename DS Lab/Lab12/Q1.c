#include <stdio.h>

void createDirectedGraph(int graph[][10], int vertices) {
    int i, j, edges, u, v;
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    for (i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
    }
}

void createUndirectedGraph(int graph[][10], int vertices) {
    int i, j, edges, u, v;
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    for (i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
}

void displayGraph(int graph[][10], int vertices) {
    int i, j;
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vertices, choice;
    int graph[10][10] = {0};

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter 1 for directed graph or 2 for undirected graph: ");
    scanf("%d", &choice);

    if (choice == 1) {
        createDirectedGraph(graph, vertices);
    } else if (choice == 2) {
        createUndirectedGraph(graph, vertices);
    }

    displayGraph(graph, vertices);

    return 0;
}
