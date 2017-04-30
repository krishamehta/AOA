#include <stdio.h>

int main(){

	int a[10],i,key,n,j,l;

	printf("Enter the number of elements:\n");
	scanf("%d",&n);

	printf("Enter the elements to be sorted:\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	printf("\n");

	for(j=1 ;j<n ; j++){
		key = a[j];
		l = j-1;

		while(l>0 && a[l]>key){
			a[l+1] = a[l];
			l = l-1;

		}

		a[l+1] = key;


	}

	printf("The sorted array is:\n");

	for (int i = 0; i < n; ++i)
	{
		printf("%d \n",a[i] );
	}

return 0;

}