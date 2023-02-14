#include <stdio.h>
int add();
void main()
{
    add();
}
int add()
{
    int n1,n2,n3;
    printf("Enter no.1 :");
    scanf("%d",&n1);
    printf("Enter no.2 :");
    scanf("%d",&n2);
    printf("Enter no.3 :");
    scanf("%d",&n3);
    printf("%d + %d + %d = %d",n1,n2,n3,n1+n2+n3);
}