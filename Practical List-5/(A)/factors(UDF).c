#include <stdio.h>
int factor(int);
void main()
{
    int n;
    printf("Enter no. :");
    scanf("%d",&n);
    factor(n);
}
int factor(int n)
{
    int i;
    printf("Factors of %d :",n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        printf("%d ",i);
    }
}