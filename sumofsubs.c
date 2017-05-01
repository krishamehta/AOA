#include<stdio.h>
int a[10],x[10],n,m;
void sumOfSubset(int sum, int index, int rem_sum)
{
 int i;
 x[index]=1;
 if((sum + a[index])==m)
 {
 printf("Solution exists: ");
 for(i=1;i<=n;i++)
 {
 if(x[i]==1)
 printf(" %d",a[i]);
 }
 printf("\n");
 }
 else if((sum + a[index] + a[index+1])<=m)
 sumOfSubset(sum + a[index], index+1, rem_sum - a[index]);
 if((sum + rem_sum - a[index])>=m && (sum + a[index+1] <=m))
 {
 x[index]=0;
 sumOfSubset(sum, index+1, rem_sum-a[index]);
 }
}
void main()
{
 int i, rem_sum=0;
 printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter values in ascending order: ");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
rem_sum = rem_sum + a[i];
}
printf("Enter the sum required: ");
scanf("%d",&m);
sumOfSubset(0,1,rem_sum);
}
