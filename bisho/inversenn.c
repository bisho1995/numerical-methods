#include<math.h>
#include<stdio.h>
#include<stdlib.h>

float ar[10][10],adj[10][10];
int row;

float create_lu_det(float a[10][10],int r)
{


int i,j,k,tmp;
float det=1;




for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
if(i>j)
{
tmp=a[i][j];
for(k=0;k<r;k++)
{
a[i][k]=-((tmp/a[j][j])*a[j][k])+a[i][k];
}
}
}
}



for(i=0;i<r;i++)
{
det=det*a[i][i];
}

return det;

}

void main()
{
int i,j,k,l,tmp,sign,p,q;
float det=1,a[10][10],b[10],sum=0,adj2[10][10];

printf("\nEnter the number of rows\n");
scanf("%d",&row);


printf("\nEnter the elements of the array one afrter the other\n");
for(i=0;i<row;i++)
for(j=0;j<row;j++)
scanf("%f",&ar[i][j]);


printf("\nEnter the b matrix\n");
for(i=0;i<row;i++)
{
scanf("%f",&b[i]);
}


/*
************Printing the array ar *************

printf("\nThe elements of the array are \n");
for(i=0;i<row;i++)
{
for(j=0;j<row;j++)
printf("%f ",ar[i][j]);
printf("\n");
}
*/




for(i=0;i<row;i++)
{
for(j=0;j<row;j++)
{
sign=(int)pow(-1,(i+j+2));

p=1;
q=1;
for(k=0;k<row;k++)
{

	for(l=0;l<row;l++)
		{
			if(k!=i && l!=j)
			{
				a[(p-1)%2][(q-1)%2]=ar[k][l];
				//printf("\na[%d][%d]=ar[%d][%d]\n",(p-1)%2,(q-1)%2,k,l);
				q++;
			
			}
		}
if(k!=i)p++;
q=1;
}

adj2[i][j]=create_lu_det(a,row-1)*sign;

}
}

/*
printf("\nThe adjoint martrix is  \n");
for(i=0;i<row;i++)
{
for(j=0;j<row;j++)
printf("%f ",adj2[i][j]);
printf("\n");
}
*/

for(i=0;i<row;i++)
{
for(j=0;j<row;j++)
adj[i][j]=adj2[j][i];
}




det=create_lu_det(ar,row);

//printf("\nThe determinant is %f\n",det);


for(i=0;i<row;i++)
for(j=0;j<row;j++)
{
adj[i][j]=adj[i][j]/det;
}



for(i=0;i<row;i++)
{
sum=0;
for(j=0;j<row;j++)
	sum+=adj[i][j]*b[j];
printf("\n%f\n",sum);
}




}
