#include<stdio.h>
#include<math.h>
int n,ar[10][10];

int determinant(int r,int c)
{
	int i,j,det=0,r1,c1,r2,c2;
	if(n==2)return (ar[r][c]*ar[r+1][c+1] -ar[r+1][c]*ar[r][c+1]);
	if(n-r==2)
	{
		c1=c++;
		if(c==n-1)
		{
			c1=c-2;
		}
		else if(c>=n)
		{
			c=n-3;
			c1=c++;
		}
		return (ar[r][c]*ar[r+1][c1] -ar[r+1][c]*ar[r][c1]);
	}
	
		
	else
		{
			for(i=r;i<n;i++)
				{
					printf("\ndet is %d\n",determinant(i+1,c+1));
					det+= pow(-1,0+i)*determinant(i+1,c+1);
				}
		}
}

void main()
{
	int i,j;
	printf("\nEnter the number of rows\n");
	scanf("%d",&n);
	printf("\nEnter data into the array\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		scanf("%d",&ar[i][j]);
		
	printf("\nThe det is %d\n",determinant(0,0));
	
}
