#include <stdio.h>

int main(){

	int a[10],i,n,min,temp;

	printf("Enter the number of elements:\n");
	scanf("%d",&n);

	printf("Enter the elements to be sorted:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n");

	for (int i = 0; i < n ; i++)
	{
		min = i;

		for (int j = i+1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}

			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
		
	}


	printf("The sorted array is:\n");

	for (int i = 0; i < n; ++i)
	{
		printf("%d \n",a[i] );
	}

return 0;
}

