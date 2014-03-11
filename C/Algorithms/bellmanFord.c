#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <string.h>


//A sturcture to represent weighted edge in graph
typedef struct Edge{
	int src,dest,weight;
}Edge;

//a structure to represent connected,directed and weighted graph
typedef struct Graph{
	// V -> Number of vertices
	// E -> Number of edges
	int V,E;
	//graph is represented as an array of edges
	Edge* edge;
}Graph;

//Creating a graph with V vertices and E edges
Graph* createGraph(int V,int E){
	Graph* graph = (Graph*)malloc(sizeof(Graph*));
	graph->V = V;
	graph->E = E;

	graph->edge = (Edge*)malloc(E*sizeof(Edge));

	return graph;
}

//Utility to print the solution
void printArr(int dist[],int n){
	int i=0;
	printf("Vertex Distance from Source\n");
	for(i=0;i<n;i++)
		printf("%d \t\t %d\n",i,dist[i]);
}

//The main function that implements the bellmanFord algorithm,
//also it detects presence of negative weight cycle
/*
* Input: An empty graph and a source/start point
*/

void BellmanFord(Graph* graph,int src){
	
	int i=0,j=0;

	int V = graph->V;
	int E = graph->E;
	int dist[V];

	//Step 1: Initialize distance from src to all the other vertices
	for(i=0;i<V;i++)
			dist[V] = INT_MAX; //A macro in limits.h
	dist[src] = 0;

	//Step 2: Relax all edges [V]-1 times.Because a simple shortest path from source to
	//destination in a graph having v vertices can be atmost v-1 or e itself

	for(i=1;i<=V;i++){
		for(j=0;j<E;j++){
			int u = graph->edge[j].src;
			int v = graph->edge[j].dest;
			int weight = graph->edge[j].weight;
			if(dist[v]>dist[u]+weight)
				dist[v] = dist[u] + weight;
		}
	}

	//Step 3: Check for negative-weight cycles.
	//Note: Step 1 through 2 guarantess shortest path , provided no negative
	//cycles exists
	//So, further if we get a shortest path, it means there is a negative cycle,
	//which is informed by the algorithm

	for(i=0;i<E;i++){
		int u = graph->edge[i].src;
		int v = graph->edge[i].dest;
		int weight = graph->edge[i].weight;

		if(dist[v] > dist[u] + weight)
				printf("Graph contains negative weight cycles");
			break;
	}

	printArr(dist,V);
	return ;	
}

/*Driver Program to test the above functionality*/

int main(){

	/*Lets create the graph given in the above example*/
	int V = 5; //number of vertices in the graph
	int E = 8; //number of edges in the graph
	Graph* graph = createGraph(V,E);

	// add edge 0-1 (or A-B in above figure)
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = -1;
 
    // add edge 0-2 (or A-C in above figure)
    graph->edge[1].src = 0;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = 4;
 
    // add edge 1-2 (or B-C in above figure)
    graph->edge[2].src = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 3;
 
    // add edge 1-3 (or B-D in above figure)
    graph->edge[3].src = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 2;
 
    // add edge 1-4 (or A-E in above figure)
    graph->edge[4].src = 1;
    graph->edge[4].dest = 4;
    graph->edge[4].weight = 2;
 
    // add edge 3-2 (or D-C in above figure)
    graph->edge[5].src = 3;
    graph->edge[5].dest = 2;
    graph->edge[5].weight = 5;
 
    // add edge 3-1 (or D-B in above figure)
    graph->edge[6].src = 3;
    graph->edge[6].dest = 1;
    graph->edge[6].weight = 1;
 
    // add edge 4-3 (or E-D in above figure)
    graph->edge[7].src = 4;
    graph->edge[7].dest = 3;
    graph->edge[7].weight = -3;
 
    BellmanFord(graph, 0);

	return 0;
}
