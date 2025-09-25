#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Comparator function to sort edges by weight
int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

// Function to find the parent of a node
int find(int parent[], int i) {
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}

// Function to perform union of two subsets
void Union(int parent[], int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

// Kruskal's algorithm to find MST
void KruskalMST(struct Edge edges[], int V, int E) {
    // Sort all edges by weight
    qsort(edges, E, sizeof(edges[0]), compare);

    // Array to store the parent of each node
    int* parent = (int*)malloc(V * sizeof(int));
    for (int i = 0; i < V; i++)
        parent[i] = -1; // Initialize all parents as -1

    printf("Edges in the MST:\n");

    // Iterate through all edges
    for (int i = 0; i < E; i++) {
        int x = find(parent, edges[i].src);
        int y = find(parent, edges[i].dest);

        // If including this edge doesn't cause a cycle, add it to the MST
        if (x != y) {
            printf("%d -- %d == %d\n", edges[i].src, edges[i].dest, edges[i].weight);
            Union(parent, x, y);
        }
    }

    free(parent);
}

// Main function
int main() {
    int V = 4; // Number of vertices
    int E = 5; // Number of edges

    // Define the edges of the graph
    struct Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    KruskalMST(edges, V, E);

    return 0;
}
