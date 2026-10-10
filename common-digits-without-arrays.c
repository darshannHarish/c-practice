#include <stdio.h>

void common_dig(int n1, int n2)
{
    int flag0=0,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0,tempn1=n1,tempn2=n2,dig1=0,dig2=0;

    while(tempn1!=0)
    {
        dig1=tempn1%10;
        while(tempn2!=0)
        {
            dig2=tempn2%10;
            if(dig1==dig2)
            {
                if(dig1==0)
                    flag0=1;
                else if(dig1==1)
                    flag1=1;
                else if(dig1==2)
                    flag2=1;
                else if(dig1==3)
                    flag3=1;
                else if(dig1==4)
                    flag4=1;
                else if(dig1==5)
                    flag5=1;
                else if(dig1==6)
                    flag6=1;
                else if(dig1==7)
                    flag7=1;
                else if(dig1==8)
                    flag8=1;
                else if(dig1==9)
                    flag9=1;
            }
            tempn2/=10;
        }
        tempn1/=10;
        tempn2=n2;
    }

    if(flag0==1)
        printf("Digit 0 is common to both the numbers\n");
    if(flag1==1)
        printf("Digit 1 is common to both the numbers\n");
    if(flag2==1)
        printf("Digit 2 is common to both the numbers\n");
    if(flag3==1)
        printf("Digit 3 is common to both the numbers\n");
    if(flag4==1)
        printf("Digit 4 is common to both the numbers\n");
    if(flag5==1)
        printf("Digit 5 is common to both the numbers\n");
    if(flag6==1)
        printf("Digit 6 is common to both the numbers\n");
    if(flag7==1)
        printf("Digit 7 is common to both the numbers\n");
    if(flag8==1)
        printf("Digit 8 is common to both the numbers\n");
    if(flag9==1)
        printf("Digit 9 is common to both the numbers\n");
}

int main()
{
    int n1=0,n2=0;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    common_dig(n1,n2);
    return 0;
}