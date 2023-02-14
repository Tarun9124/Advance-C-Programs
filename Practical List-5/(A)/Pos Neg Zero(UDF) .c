#include <stdio.h>
int check(int);
void main()
{
    int n;
    printf("Enter no. :");
    scanf("%d",&n);
    check(n);
}
int check(int n)
{
    if(n<0)
    printf("%d is Negative",n);
    else if(n>0)
    printf("%d is Positive",n);
    else
    printf("%d is Zero",n);
}