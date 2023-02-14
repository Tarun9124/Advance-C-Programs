#include<stdio.h>
#define MAX(x,y) (((x)>(y))?(x):(y))
void main()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    printf("Maximum : %d",MAX(x,y));
}
