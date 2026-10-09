#include <stdio.h>
#include <math.h>

int main()
{
    float P1[2],P2[2],P3[2];

    printf("Enter the x and y coordinate of point 1\n");
    scanf("%f%f",&P1[0],&P1[1]);

    printf("Enter the x and y coordinate of point 2\n");
    scanf("%f%f",&P2[0],&P2[1]);

    printf("Enter the x and y coordinate of point 3\n");
    scanf("%f%f",&P3[0],&P3[1]);

    if(fabs(P1[0])<fabs(P2[0]))
    {
        if(fabs(P1[0])<fabs(P3[0]))
            printf("The point closest to y axis is: (%f,%f)\n",P1[0],P1[1]);
        else if(fabs(P1[0])==fabs(P3[0]))
            printf("Two points that are equidistant to y axis and closest to y axis are: (%f,%f) and (%f,%f)\n",P1[0],P1[1],P3[0],P3[1]);
        else
            printf("The point closest to y axis is: (%f,%f)\n",P3[0],P3[1]);  
    }
    else if(fabs(P1[0])==fabs(P2[0]))
    {
        if(fabs(P1[0])<fabs(P3[0]))
            printf("Two points equidistant to y axis and closest to y axis are: (%f,%f) and (%f,%f)\n",P1[0],P1[1],P2[0],P2[1]);
        else if(fabs(P1[0])==fabs(P3[0]))
            printf("Three points that are equidistant to y axis and closest to y axis are: (%f,%f) (%f,%f) and (%f,%f)\n",P1[0],P1[1],P2[0],P2[1],P3[0],P3[1]);
        else
            printf("The point closest to y axis is: (%f,%f)\n",P3[0],P3[1]);
    }
    else
    {
        if(fabs(P2[0])<fabs(P3[0]))
            printf("The point closest to y axis is: (%f,%f)\n",P2[0],P2[1]);
        else if(fabs(P2[0])==fabs(P3[0]))
            printf("Two points that are equidistant to y axis and closest to y axis are: (%f,%f) and (%f,%f)\n",P2[0],P2[1],P3[0],P3[1]);
        else
            printf("The point closest to y axis is: (%f,%f)\n",P3[0],P3[1]);
    }

    if(fabs(P1[1])<fabs(P2[1]))
    {
        if(fabs(P1[1])<fabs(P3[1]))
            printf("The point closest to x axis is: (%f,%f)\n",P1[0],P1[1]);
        else if(fabs(P1[1])==fabs(P3[1]))
            printf("Two points that are equidistant to x axis and closest to x axis are: (%f,%f) and (%f,%f)\n",P1[0],P1[1],P3[0],P3[1]);
        else
            printf("The point closest to x axis is: (%f,%f)\n",P3[0],P3[1]);  
    }
    else if(fabs(P1[1])==fabs(P2[1]))
    {
        if(fabs(P1[1])<fabs(P3[1]))
            printf("Two points equidistant to x axis and closest to x axis are: (%f,%f) and (%f,%f)\n",P1[0],P1[1],P2[0],P2[1]);
        else if(fabs(P1[1])==fabs(P3[1]))
            printf("Three points that are equidistant to x axis and closest to x axis are: (%f,%f) (%f,%f) and (%f,%f)\n",P1[0],P1[1],P2[0],P2[1],P3[0],P3[1]);
        else
            printf("The point closest to x axis is: (%f,%f)\n",P3[0],P3[1]);
    }
    else
    {
        if(fabs(P2[1])<fabs(P3[1]))
            printf("The point closest to x axis is: (%f,%f)\n",P2[0],P2[1]);
        else if(fabs(P2[1])==fabs(P3[1]))
            printf("Two points that are equidistant to x axis and closest to x axis are: (%f,%f) and (%f,%f)\n",P2[0],P2[1],P3[0],P3[1]);
        else
            printf("The point closest to x axis is: (%f,%f)\n",P3[0],P3[1]);
    }
    return 0;
}