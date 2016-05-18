#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int ar[10][10],n,tmp[10];
float x[10],b[10];
void inputs()
{
	int i,j;
	printf("\nEnter the number of elements of the matrix\n");
	scanf("%d",&n);
	printf("\nEnter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("\nEnter b matrix\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&b[i]);
	}
}
int isDom(int i,int j)
{
	int k,sum=0;
	for(k=0;k<n;k++)
	{
		if(k!=j)
		{
			sum+=ar[i][k];
		}
	}
	//printf("\nRow is %d and sum is %d and diagonal is %d\n",i,sum,abs(ar[i][j]));
	if(abs(ar[i][j])>sum)return 1;
	return 0;
}
void makeDiaDom()
{
	int i,j,k,tmp2=0;			
	for(i=0;i<n;i++)
	{
		//printf("\ni is %d\n",i);
		if(!isDom(i,i)==1)
		{
			//printf("\n%d is not DOM\n",i);
			for(j=i+1;j<n;j++)
			{
				if(isDom(j,i)==1)
				{
					//swap here
					for(k=0;k<n;k++)
					{
						tmp[k]=ar[j][k];
						ar[j][k]=ar[i][k];
						ar[i][k]=tmp[k];
					}
					tmp2=b[i];
					b[i]=b[j];
					b[j]=tmp2;
					break;
				}
			}
		}
		//else printf("\n%d is DOM\n",i);
	}
}
void main()
{
	int i,j,k;
	float sum;
	inputs();
	makeDiaDom();
	printf("\nThe matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	
	for(k=0;k<n;k++)
	{
		x[i]=0;
	}
	for(j=0;j<10;j++)
	{   //loop runs 10 trimes
		for(k=0;k<n;k++)
			{
				sum=0;
				for(i=0;i<n;i++)
				{
					if(i!=k)
					{
						sum+=ar[k][i]*x[i];
					}
				}
			x[k]=(b[k]-sum)/ar[k][k];
			//printf("\nSum is %f\n",sum);
			}
	}
	printf("\nThe Xs are\n");
	for(i=0;i<n;i++)
	{
		printf("\n%f",x[i]);
	}
}
