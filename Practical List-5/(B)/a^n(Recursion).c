#include <stdio.h>
int pwr(float,int);
void main()
{
    int a,n,ans;
    printf("Enter base :");
    scanf("%d",&a);
    printf("Enter power :");
    scanf("%d",&n);
    ans = pwr(a,n);
    printf("Answer : %d",ans);
}
int pwr(float a,int n)
{
    if(n==0)
    return 1;
    else
    return(a*pwr(a,n-1));
}