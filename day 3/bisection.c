#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x)
{
    return (pow(x,3)+(3*x)-5);
}

int main()
{
    float a,b,c=0;
    int i;
    printf("\nEnter the values of (a,b) : ");
    scanf("%f %f",&a,&b);
    for(i=0;i<9;i++)
    {
        c=(a+b);
        c=c/2;
        if(f(c)==0)
            break;
        else
        {
            if(f(a)<f(c))
                b=c;
            else a=c;
        }
        //printf("\ni is %d a is %f b is %f c is %f\n",i,a,b,c);
    }
    printf("\nThe point is %f\n",c);
    return 0;
}
