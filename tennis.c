#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//To calculate the winner

int calc(int a[],int x,int n);  // Pass the array, lower bound value , upper bound value.

int main()
{
	srand(time(NULL));
	int n,w,i,a[10]; // no of players, winner , counter , array.
	printf("enter the number of players\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%60; //random score.
		printf("player number is %d,%d\n",i+1,a[i]);
	}
	w=calc(a,0,n-1);
printf("winner is %d\n",w);

return 0;
}

int calc(int a[],int x,int n)
{
	int w1,w2,mid;
	if(n==1)
	{
		return a[n];
	}
	else if((n-x)>2)
	{
		mid=(x+n)/2;
		w1=calc(a,x,mid);
		w2=calc(a,mid+1,n-1);
		if(w1>w2)
			return w1;
		else
			return w2;
	}
	else
	{
		if(a[n]>a[x])
			return a[n];
		else
			return a[x];
	}
}
