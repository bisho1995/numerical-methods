#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int n;
float d[11],x[10],y[10],num,h,ar[10][10];
void inputs()
{
	int i;
	printf("\nEnter the number of terms\n");
	scanf("%d",&n);
	printf("\nEnter the Xs\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);

	}

	printf("\nEnter the Ys\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
		ar[i][0]=y[i];
	}
	h=x[1]-x[0];
	printf("\nEnter the x to search for\n");
	scanf("%f",&num);
}
void create_and_print_diff_table()
{
    int max=n-1,i,j,x,y=1;
    for(j=0;j<n-1;j++)
    {
        for(i=1;i<=max;i++)
        {
            ar[i-1][y]=ar[i][y-1]-ar[i-1][y-1];
        }
        max--;
        y++;
    }
    printf("\nThe difference table\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f ",ar[i][j]);
        }
        printf("\n");
    }
}
int facto(int k)
{
	int i,facto=1;
	if(k==0 || k==1)return 1;
	for(i=1;i<=k;i++)
	{
		facto*=i;
	}
	return facto;
}
void 	diff_table_fill(int n1)
{
	int i,index=0,j,n2;
	float k[10];
	for(i=0;i<n1;i++)
		k[i]=y[i];
	for(i=0;i<n;i++)
	{
		d[index++]=k[0];
		if(n1<1)break;
		for(j=0;j<n1-1;j++)
		{
			k[j]=k[j+1]-k[j];
		}
		n1--;
	}
	/*printf("\n");
	for(i=0;i<n;i++)
    {
        printf("%f\n",d[i]);
    }
	printf("\n");*/
}
float return_x_multi(float k,int i)
{
	float prod=1;
	if(i==0)return 1;
	else
	{
		i--;
		while(i>=0)
		{
			prod*=(k-x[i--]);
		}
	}
	return prod;
}
float result_calculate(float x)
{
	int i;
	float sum=0;
	for(i=0;i<n-1;i++)
	{
		sum+=(d[i]*return_x_multi(x,i))/(facto(i)*pow(h,i));
		//sum=return_x_multi(x,i);
		//printf("\nSum is %f\n",sum);
	}
	return sum;
}
int main()
{
	int i;
	float result;
	inputs();
	diff_table_fill(n);
	create_and_print_diff_table();
	printf("\nResult is %f\n",result=result_calculate(num));

    return 0;
}
