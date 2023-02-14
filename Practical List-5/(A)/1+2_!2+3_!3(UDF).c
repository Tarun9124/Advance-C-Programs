#include <stdio.h>
float fact(int);
void main()
{
    int n,j;
    float sum=0;
    printf("Enter no. :");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    sum = sum + (float)j/fact(j);
    printf("%f ",sum);
}
float fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f = f*i;
    return f;
}