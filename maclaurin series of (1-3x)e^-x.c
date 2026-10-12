#include <stdio.h>
#include <math.h>

int fact(int n)
{
    int f=1;
    if(n>0)
    {
        f*=n;
        return fact(n-1);
    }
    else
    {
        return f;
    }
}

int main()
{
    float x=0.0,sum=1.0,term=0.0,tempsum=0.0;
    int p=0,k=0;

    printf("Enter a floating point number x, 0<x<1\n");
    do
    {
        scanf("%f",&x);
    } while (x<=0.0&&x>=1.0);

    printf("Enter a positive integer p:\n");
    do
    {
        scanf("%d",&p);
    } while (p<0);

    printf("term 1: %f\n",sum);
    
    for(int i=1;i<p;i++)
    {
        term=((float)(pow(-1,i)*(3*i+1)*pow(x,i)))/(float)fact(i);
        sum+=term;
        printf("term %d: %f\tsum of series upto %dth term: %f\n",i+1,term,i+1,sum);
        if(i>1)
        {
            if(sum-tempsum<=0.0001)
            {
                k=i+1;
                printf("the difference between the sum upto %dth term and the sum upto %dth term is <0.0001\n",k,k-1);
            }
        }
        tempsum+=term;g
    }
}