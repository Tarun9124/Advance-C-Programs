//Write a program to Search an array element//
#include<stdio.h>
#define N 5
int main()
{
 int a[N],i;
 int value,place=0;

 //Input an Array
 for(i=0;i<N;i++)
 {
   printf("Enter No-[%d]:",i+1);
   scanf("%d",&a[i]);
 }

  printf("Enter a value to search:");
  scanf("%d",&value);

 //Searching Of a value
  for(i=0;i<N;i++)
  {
   if(a[i] == value) 
    {
     place = i+1;
     break;
    }
  }
  if(place==0) 
    printf("%d is not found in array",value);
  else
    printf("%d is found at place- %d in array.",value,place);
    
}