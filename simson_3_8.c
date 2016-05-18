#include<stdio.h>
#include<stdlib.h>

float x[10],y[10];
int n;

void inputs()
{
    int i;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("Enter the x terms one after the other");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    printf("Enter the y terms one after the other");
    for(i=0;i<n;i++)
        scanf("%f",&y[i]);
}

float f()
{
    int i;
    float h,sum=0,sum1=0,sum2=0;
    h=x[1]-x[0];
    sum+=y[0]+y[n-1];
    for(i=1;i<n-1;i++)
    {
        if(i%3==0)sum2+=y[i];
        else sum1+=y[i];
    }
    sum+=sum1+sum2;
    sum*=(3*h/8);
    return sum;
}

int main()
{
    inputs();
    printf("The answer is %f",f());
    getch();
    return 0;
}
