#include <stdio.h>
#include <math.h>

//commented by gopesh

int add(int x, int y)
{
    return x + y;
}

//add a description and parameters for the function add
/**
 * @brief Adds two integers.
 *
 * This function takes two integers as input and returns their sum.
 *
 * @param x The first integer to be added.
 * @param y The second integer to be added.
 * @return The sum of the two integers.
 */
int main()

{
    int i=0;
    printf("hello world");
    //accept input from user and store in variable i
    printf("enter a number: ");
    scanf("%d",&i);
    printf("you entered: %d",i);
    //calculate square of the number and print it
    int square = i * i;
    printf("the square of the number is: %d\n",square);
    // printing both the roots of the square
    float root1 = sqrt(square);
    float root2 = -sqrt(square);
    printf("the roots of the square are: %f and %f", root1, root2);
    //drawing circle graphically using ASCII characters
    int radius = 5;
    for(int y = radius; y >= -radius; y--)
    {
        for(int x = -radius; x <= radius; x++)
        {
            if(x*x + y*y <= radius*radius)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    //building integral calculator using trapezoidal rule
    double a, b;
    printf("enter the lower limit of integration: ");
    scanf("%lf",&a);
    printf("enter the upper limit of integration: ");
    scanf("%lf",&b);
    return 0; 
}