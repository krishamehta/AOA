#include<stdio.h>
#define INFINITY 9999
#define MAX 10

void dij(int G[MAX][MAX],int n, int startnode);

void main(){

	int G[max][max],i,j,n,u;

	printf("Enter the no of vertices");
	scanf("%d",&n);

	printf("Enter the adjacency matrix:\n);
	
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
		scanf("%d",&G[i][j]);

	printf("Enter the starting node");
	scanf("%d",&u);

	dij(G,n,u);

}

void dij(int G[MAX][MAX],int n , int startnode)
{

	int cost[MAX][MAX],distance[MAX],pred[MAX];
	int visited[MAX],count,mindistance,nextnode,i,j;

	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
		if(G[i][j] = 0)
		  cost[i][j] = INFINITY
		else
		 cost[i][j] = G[i][j];

	for (i=0;i<n;i++){
	
		distance[i] = cost[startnode][i];
		pred[i] = startnode;
		visited[i] = 0;
	}

	distance[startnode] = 0;
	visited[startnode] = 1;
	count = 1;

	while(count < n-1){
	
}
