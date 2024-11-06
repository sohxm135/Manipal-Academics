#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* createNode(int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

void addEdge(Node* adjList[], int u, int v, int directed) {
    Node* newNode = createNode(v);
    newNode->next = adjList[u];
    adjList[u] = newNode;
    if (!directed) {
        newNode = createNode(u);
        newNode->next = adjList[v];
        adjList[v] = newNode;
    }
}

void displayGraph(Node* adjList[], int vertices) {
    int i;
    for (i = 0; i < vertices; i++) {
        Node* temp = adjList[i];
        printf("Vertex %d:", i);
        while (temp) {
            printf(" -> %d", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int vertices, edges, u, v, directed, i;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    Node* adjList[10] = {NULL};

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter 1 for directed graph or 0 for undirected graph: ");
    scanf("%d", &directed);

    for (i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        addEdge(adjList, u, v, directed);
    }

    displayGraph(adjList, vertices);

    return 0;
}
