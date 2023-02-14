#include <stdio.h>
int min(int,int);
void main()
{
    int n1,n2;
    printf("Ener no. 1 :");
    scanf("%d",&n1);
    printf("Ener no. 2 :");
    scanf("%d",&n2);
    min(n1,n2);
}
int min(int n1,int n2)
{
    if(n1<n2)
    printf("%d is Minimum",n1);
    else if(n1>n2)
    printf("%d is Minimum",n2);
    else
    printf("Both are same");
}
