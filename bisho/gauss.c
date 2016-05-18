#include<stdio.h>

void main()
{
	float ar[10][10],det=1;
	int row,col,i,j,k,tmp;
	printf("\nEnter the number of rows\n");
	scanf("%d",&row);
	col=row;
	printf("Enter the array elements\n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)	
			scanf("%f",&ar[i][j]);
			
	
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i>j)
			{
					tmp=ar[i][j];			
				for(k=0;k<col;k++)
				{
					ar[i][k]=ar[i][k]-(tmp/ar[j][j]*ar[j][k]);

				}
			}
			else break;
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		det=det*ar[i][i];
	}
	

	
	
printf("\n ******* The matrix is ********\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %.3f ",ar[i][j]);
		}
		printf("\n");
	}
	
	
		printf("\nThe determinant is %.3f\n",det);
}
