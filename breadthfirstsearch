#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define V 6  // Number of vertices

void BFS(int graph[V][V], int start) {
    bool visited[V];
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }

    int queue[V], front = 0, rear = -1;
    visited[start] = true;
    queue[++rear] = start;

    printf("Breadth-First Search starting from vertex %d: ", start);
    while (front <= rear) {
        int node = queue[front++];
        printf("%d ", node);

        for (int i = 0; i < V; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                queue[++rear] = i;
                visited[i] = true;
            }
        }
    }
    printf("\n");
}

int main() {
    int graph[V][V] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 0},
        {0, 1, 1, 0, 0, 1},
        {0, 0, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0}
    };

    BFS(graph, 0);  // Start BFS from vertex 0
    return 0;
}
