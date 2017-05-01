#include <stdio.h>

int a[10],x[10], m, n;

sumSub(int sum, int index , int rem_sum){

  int i;

  x[index] = 1;

  if((sum + a[index]) == m){
    printf("Solution exists:\n");

    for (int i = 1; i <=n ; ++i)
    {
      if (x[i] = 1)
      {
        printf("%d\n",a[i] );
      }
    }
      printf("\n");
    }

    else if ((sum + a[index] + a[index+1] < = m))
    {
      
    }
  
}

void main(){

  int i , rem_sum = 0;

  printf("Enter the number of elements:\n");
  scanf("%d",&n);

  printf("Enter values in asc order:\n");

  for (int i = 1; i <= n; i++)
  {
    scanf("%d",&a[i]);
    rem_sum = rem_sum + a[i];
  }

  printf("Enter the sum required:\n");
  scanf("%d",&m);

  sumSub(0,1,rem_sum);

}

