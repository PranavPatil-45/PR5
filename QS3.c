
#include <stdio.h>

void main() 
{
    int n,i,j;

  
    printf("Enter the  row and column size: ");
    scanf("%d", &n);

    int a[n][n],transpose[n][n];


    
    printf("Enter array elements:\n");
    for (i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
          printf("a[%d][%d]= ", i,j);
          scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    for (i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
  
    for (i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
          transpose[j][i]=a[i][j];
        }
    }
    
   
    printf("transpose of the array:\n");
     for (i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
          printf("%d ",transpose[i][j]);
        }
        printf("\n");
    } 

    
}

