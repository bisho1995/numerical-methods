#include <stdio.h>
#include<stdlib.h>

void main()
{
int ar[10][10],n,m,i,j,A=0,B=0,x=1,z=1,k;
printf("\nEnter the rows one after the other\n");
scanf("%d",&n);
scanf("%d",&m);
printf("\nEnter the elements one after the other\n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		scanf("%d",&ar[i][j]);
	}
}
//making of A
for(i=0;i<n;i++)
{
	j=i;z=1;x=1;
	for(k=0;k<m;k++)
	{
		j=j%n;
		z=z*ar[i][j];
		x=x*ar[n-1-i][j];
		j++;
	}
	A+=z;
	B+=x;
}
printf("\nDeterminant of  Matrix is %d \n",A-B);
}
