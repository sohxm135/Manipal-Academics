#include <stdio.h>

void dfs(int graph[][10], int vertices, int visited[], int start) {
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i < vertices; i++) {
        if (graph[start][i] && !visited[i]) {
            dfs(graph, vertices, visited, i);
        }
    }
}

int main() {
    int graph[10][10] = {0}, vertices, edges, u, v, start;
    int visited[10] = {0};

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

    printf("Enter starting vertex for DFS: ");
    scanf("%d", &start);

    printf("DFS traversal: ");
    dfs(graph, vertices, visited, start);
    printf("\n");

    return 0;
}
