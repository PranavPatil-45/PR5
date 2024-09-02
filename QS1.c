
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	 printf("Negative elelmets: ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
}
