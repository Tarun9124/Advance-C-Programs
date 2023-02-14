#include<stdio.h>

void SUM(int);
main() 
{
    int n;
    printf("Enter Limit:");
    scanf("%d",&n);
    SUM(n);
}
void SUM(int num)
{
  int i,s=0;
  for(i=1;i<=num;i++)
  s = s + i;
  printf("Sum of 1 to %d = %d",num,s);
}