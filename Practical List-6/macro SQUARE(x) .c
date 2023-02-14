#include<stdio.h>
#define SQUARE(x) x*x
void main()
{
    int n;
    printf("Enter a No.: ");
    scanf("%d",&n);
    printf("Square of %d is %d",n,SQUARE(n));
}