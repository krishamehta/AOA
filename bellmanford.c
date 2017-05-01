#include<stdio.h>
#define infinity 999
void bellman(int n,int v,int cost[10][10],int dist[])
{
 int i,k,u,count,w,flag[10],min;
 for(i=1;i<=n;i++)
 dist[i]=infinity;
 dist[v]=0;
 for(k=1;k<n;k++)
 {
 for(i=1;i<=n;i++)
 {
 u=i;
 for(w=1;w<=n;w++)
 {
 if((dist[w]>dist[u]+cost[u][w]))
 dist[w]=dist[u]+cost[u][w];
 }
 }
 }
}
void main()
{
 int n,v,i,j,cost[10][10],dist[10];
 printf("\nEnter the number of nodes:");
 scanf("%d",&n);
 printf("\nEnter the cost matrix:\n");
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 scanf("%d",&cost[i][j]);
 if(cost[i][j]==0)
 cost[i][j]=infinity;
 }
 }
 printf("\nEnter the source of the matrix:");
 scanf("%d",&v);
 bellman(n,v,cost,dist);
 printf("\nShortest path:\n");
 for(i=1;i<=n;i++)
 if(i!=v)
 printf("%d->%d,cost=%d\n",v,i,dist[i]);
}