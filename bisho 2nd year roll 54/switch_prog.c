#include<stdio.h>
#include<stdlib.h>

int ar1[10][10],ar2[10][10];
int ch,n,m,i,j,k,z;
void fill_array()
{
	printf("Enter the number of rows and the number of columns in the arrray\n");
	scanf("%d %d",&n,&m);
	printf("\n***********************Input into the first array **********************\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar1[i][j]);
		}
	}
	printf("\n*************************Input into the second array ******************\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&ar2[i][j]);
	}
}
void fill_array_single_array()
{
	printf("Enter the number of rows and the number of columns in the arrray\n");
	scanf("%d %d",&n,&m);
	printf("\n***********************Input into the  array **********************\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar1[i][j]);
		}
	}
}

void matrix_add()
{
	fill_array();
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			ar1[i][j]=ar1[i][j]+ar2[i][j];
		}
	}
	printf("\nThe added matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",ar1[i][j]);
		}
		printf("\n");
	}
	
}

void matrix_transpose()
{
	fill_array_single_array();
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				ar2[j][i]=ar1[i][j];
			}
		}
	printf("\nThe transposed matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",ar2[i][j]);
		}
		printf("\n");
	}
	
}


void matrix_multiply()
{
	fill_array();
	int ar3[10][10];
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				z=0;
				for(k=0;k<m;k++)
				{
					z+=ar1[i][k]*ar2[k][i];
				}				
				ar3[i][j]=z;
			}
		}
	printf("\nThe  matrix multlipication is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",ar3[i][j]);
		}
		printf("\n");
	}
	
}
void main()
{
	printf("\nEnter the choice :\n1.Add two matrix\n2.Tranpose a matrix\n3.Multiply two matrix\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:matrix_add();
			break;
		case 2:matrix_transpose();
			break;
		case 3: matrix_multiply();
			break;
	}
}
