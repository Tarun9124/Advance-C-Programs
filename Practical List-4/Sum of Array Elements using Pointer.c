#include <stdio.h>
void main() 
{
  int a[5],i,sum=0;
  int *p;

  p=a;

  for(i=0;i<5;i++) 
  {
    printf("Enter No-%d:",i+1);
    scanf("%d",p+i);
    sum = sum + *(a+i) ;
  }

  //for(i=0;i<5;i++) ;
  // printf("%d",*(p+i));
   printf("\nSum = %d",sum);
}