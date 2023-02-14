#include <stdio.h>
void main() 
{
 int n1,n2,temp; 
 int *p1=&n1,*p2=&n2;
 printf("Enter First Number:");
 scanf("%d",p1);
 printf("Enter Second Number:");
 scanf("%d",p2);

 printf("Before Swapping:\n");
 printf("n1=%d n2=%d",n1,n2);

 temp = *p1;
 *p1 = *p2;
 *p2 = temp;

 printf("\nAfter Swapping:\n");
 printf("n1=%d n2=%d",n1,n2);

}