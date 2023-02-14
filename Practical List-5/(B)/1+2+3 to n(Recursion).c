#include <stdio.h>
int add(int );
void main()
{
    int n,ans;
    printf("Enter no. :");
    scanf("%d",&n);
    ans = add(n);
    printf("Addition of 1 to %d : %d",n,ans);
}
int add(int n)
{
    if(n==1)
    return 1;
    else
    return(n+add(n-1));
}