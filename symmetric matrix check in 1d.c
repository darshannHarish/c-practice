#include <stdio.h>
#include <math.h>

int main()
{
    int n=0,flag=1;;
    printf("Enter the order of square matrix\n");
    scanf("%d",&n);
    int A[n*n];
    printf("Enter the elements of %dx%d matrix:\n",n,n);
    for(int i=0;i<n*n;i++)
        scanf("%d",&A[i]);
    int cnt=0,a=0;
    int At[n*n];
    for(;a<n;a++)
    {
        for(int i=0;i<n*n;i++)
        {
            if((i-a)%n==0||(i-a)==0)
            {
            At[cnt]=A[i];
            cnt++;
            }
        }
    }
    for(int i=0;i<n*n;i++)
    {
        if(A[i]!=At[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("The matrix is not symmetric\n");
    }
    else
        printf("the matrix is symmetric\n");
}