#include <stdio.h>
void main() 
{
 int x; 
 int *p;
 p = &x;
 printf("Enter Integer Value:");
 scanf("%d",p);
 printf("Value of x = %d",*p);

}