#include<stdio.h>
int i,j,n,m,adj[10][10],x[10]={0};
void getNodeColor(int k)
{
 while(1)
 {
 x[k]=(x[k]+1)%(m+1);
 if(x[k]==0)
 return ;
 for(j=1;j<=n;j++)
 {
 if(adj[k][j]==1 && x[k]==x[j])
 break;
 }
 if(j==n+1)
 return ;
 }
}
void mColoring(int k)
{
 getNodeColor(k);
 if(x[k]==0)
 return;
 if(k==n)
 {
 printf("Node \t Color\n");
 printf("-------------------\n");
 for(i=1;i<=n;i++)
 {
 printf("%d \t %d\n",i,x[i]);
 }
 printf("\n");
 }
 else
 mColoring(k+1);
}
void main()
{
 printf("\nEnter the number of nodes: ");
 scanf("%d",&n);
 m=n-1;
 printf("\nEnter the adj matrix:\n");
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 scanf("%d",&adj[i][j]);
 }
 }
 printf("\n\n");
 mColoring(1);
}