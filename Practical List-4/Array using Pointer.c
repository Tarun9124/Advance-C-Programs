#include <stdio.h>
void main() 
{
  int a[100],n,i;
  int *p;

  p=a;

  printf("Enter number of elements:"); 
  scanf("%d",&n);
 
  printf("Enter Array Elements::");
  for(i=0;i<n;i++,p++) 
    scanf("%d",p);
    
  p = p - n;
  
  printf("Array Elements are::");
  for(i=0;i<n;i++,p++) 
     printf("%d\n",*p);
}