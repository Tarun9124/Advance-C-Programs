#include <stdio.h>
void main() 
{
 int n1,n2,ans; 
 int *p1=&n1,*p2=&n2;
 printf("Enter First Number:");
 scanf("%d",p1);
 printf("Enter second Number:");
 scanf("%d",p2);

 ans = *p1 + *p2;

 printf("%d + %d = %d\n",n1,n2,ans);

}