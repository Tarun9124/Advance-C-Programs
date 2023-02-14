#include <stdio.h>
int square(int);
int cube(int);
void main()
{
    int i,n,sum=0;
    printf("Enter no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum = sum+square(i);
        else
            sum = sum+cube(i);
    }
    printf("Answer : %d",sum);
}
int square(int i)
{
    int s;
    s = i*i;
    return s;
}
int cube(int i)
{
    int c;
    c = i*i*i;
    return c;
}