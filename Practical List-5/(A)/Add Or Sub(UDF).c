#include <stdio.h>
int add(int,int);
int sub(int,int);
void main()
{
    int n1,n2;
    printf("Enter no.1 :");
    scanf("%d",&n1);
    printf("Enter no.2 :");
    scanf("%d",&n2);
    add(n1,n2);
    sub(n1,n2);
}
int add(int n1,int n2)
{
    printf("%d + %d = %d\n",n1,n2,n1+n2);
}
int sub(int n1,int n2)
{
    printf("%d - %d = %d ",n1,n2,n1-n2);
}