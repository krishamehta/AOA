#include<stdio.h>
int min(int x, int y)
{
 if(x<y)
 return x;
 else
 return y;
}
void print(int a[10][10], int n)
{
 int i,j;
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 printf("%d\t",a[i][j]);
 }
 printf("\n");
 }
 printf("\n");
}
void main()
{
 int n,i,j,k,cost[10][10];
 printf("\nEnter the number of nodes:");
 scanf("%d",&n);
 printf("\nEnter the cost matrix and enter 999 as infinity:\n");
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 scanf("%d",&cost[i][j]);
 }
 }
 for(k=1;k<=n;k++)
 {
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
 }
 }
 printf("A(%d):\n",k);
 print(cost,n);
 }
 printf("The all-pair shortest path is:\n");
 printf("A(%d):\n",k);
 print(cost,n);
}