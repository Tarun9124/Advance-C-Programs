#include<stdio.h>
#define ROUND(x) ((x)>=0?(long)((x)+0.5):(long)((x)-0.5))
void main()
{
    float x;
    printf("Enter x: ");
    scanf("%f",&x);
    printf("Round of %f = %d",x,ROUND(x));
}
    