#include<stdio.h>
#include<math.h>

int x[10],y[10],n,table[10],myIndex=0;

void calculate_diff_table()
{
	int d[10],i,x1,x2,y1,j;
	for(i=1;i<n;i++)
	{
		x1=-1;
		y1=0;
		do
		{
			x1++;
			x2=x1+i;
			d[y1]=(y[y1+1]-y[y1])/(x[x2]-x[x1]);
			y1++;
		}
		while(x2!=(n-1));
		for(j=0;j<=y1;j++)
			y[j]=d[j];
		//printf("\n\nThe diff table\n\n");
		/*for(j=0;j<y1;j++)
			printf("%d\n",y[j]);
		*/
		table[myIndex++]=y[0];
	}

	for(i=0;i<=myIndex;i++)
		printf("\n%d",table[i]);
}

int f(int k)
{
	int i,z=1,sum=0,j;
	for(i=0;i<n;i++)
	{
		z=1;
		if(i-1<0)z=1;
		else 
		{
			for(j=0;j<=(i-1);j++)
				z*=(k-x[j]);	
		}
		sum+=z*table[i];
		printf("\n%d*%d\n",z,table[i]);
	}
	return sum;	
}

void input()
{
	int i;
	printf("\nEnter the number of terms\n");
	scanf("%d",&n);
	printf("\nEnter the X terms\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nEnter the Y terms\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
	}
	/*printf("\nThe input variables\nThe x array\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",x[i]);
	}
	printf("\nThe Y array\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",y[i]);
	}
	*/
	table[myIndex++]=y[0];
}

void main()
{
	input();		
	calculate_diff_table();
	int x;
	printf("\n\n Enter the value of x \n");
	scanf("%d",&x);
	printf("\n\nThe value is %d\n\n",f(x));
}
