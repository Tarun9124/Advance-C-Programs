#include <stdio.h>
int fact(int);
void main()
{
    int n,f;
    printf("Enter no. :");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial of %d : %d",n,f);
}
int fact(int n)
{
    int i,ans=1;
    for(i=1;i<=n;i++)
        ans = ans*i;
    return ans;
}