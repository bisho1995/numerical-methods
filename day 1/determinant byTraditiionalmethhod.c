#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int ar[10][10],row,col;

int detOf2DMatrix(int ar[2][2])
{

    return ((ar[0][0]*ar[1][1])-(ar[0][1])*ar[1][0]);
}

void inputs()
{
    int i,j;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&row,&col);
    printf("Enter the elements one after the other \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the element: ");
            scanf("%d",&ar[i][j]);
        }
    }
}

int main()
{
    int i,j,a[2][2],result=0;
    inputs();
    for(i=0;i<row;i++)
    {
        a[0][0]=ar[1][(i+1)%3];
        a[0][1]=ar[1][(i+2)%3];
        a[1][0]=ar[2][(i+1)%3];
        a[1][1]=ar[2][(i+2)%3];
        result=result+ar[0][i]*detOf2DMatrix(a);

    }
    printf("\n\n******** The determinant is ************\n\n%d\n\n\n",result);
    return 0;
}

