#include<stdio.h>
#include<stdlib.h>
void main()
{
	float ar[10][10];
	float b[10],x[10];
	float tmp,sum=0;
	int i,j,n,k;
printf("\nEnter the number of variables\n");
scanf("%d",&n);
printf("\nEnter the array elemets\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%f",&ar[i][j]);




for(i=0;i<n;i++)
{
ar[i][n]=b[i];
}

for(i=0;i<n;i++)
{

for(j=0;j<=n;j++)
{
if(i<=j)break;
tmp=ar[i][j];
for(k=0;k<=n;k++)
{
ar[i][k]=ar[i][k]-(tmp*ar[j][k]/ar[j][j]);
}
}


}



for(i=n-1;i>=0;i--)
{
sum=0;
for(k=n-1;k>i;k--)
{
sum+=ar[i][k]*x[k];
}
if(ar[i][i]!=0)
	x[i]=(ar[i][n]-sum)/ar[i][i];


}


printf("\nThe Xs are\n");
for(i=0;i<n;i++)
printf("%f\n",x[i]);



}

