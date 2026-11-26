
#include <stdio.h>

int graph[5][5] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0},
    {0, 1, 1, 0, 0}
};

int visited[5];

// Breadth First Search
void BFS(int start)
{
    int queue[5];
    int front = 0, rear = 0;

    for(int i = 0; i < 5; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("\nBFS Traversal: ");

    while(front < rear)
    {
        int node = queue[front++];
        printf("%d ", node);

        for(int i = 0; i < 5; i++)
        {
            if(graph[node][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

// Depth First Search
void DFS(int node)
{
    visited[node] = 1;
    printf("%d ", node);

    for(int i = 0; i < 5; i++)
    {
        if(graph[node][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    printf("Graph is initialized.");

    BFS(0);

    for(int i = 0; i < 5; i++)
        visited[i] = 0;

    printf("\nDFS Traversal: ");
    DFS(0);

    return 0;
}
