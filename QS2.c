#include <stdio.h>

void main() 
{
    int n1,n2,i,j,large;

    
    printf("Enter the array's row size: ");
    scanf("%d", &n1);
    
    printf("Enter the array's column size: ");
    scanf("%d", &n2);

    int a[n1][n2];

    
    printf("Enter array elements:\n");
    for (i=0;i<n1;i++) 
	{
		for(j=0;j<n2;j++)
		{
          printf("a[%d][%d]= ", i,j);
          scanf("%d", &a[i][j]);
        }
    }

    
    large = a[0][0];

    
    for (i=1;i<n1;i++) 
	{
		for(j=1;j<n2;j++)
	   {
		
         if (a[i][j]>large) 
		 {
            large = a[i][j];
         }
       }
    }

    
    printf("The largest  is: %d\n", large);

}
