#include<stdio.h>
int main()
{
  int arr[20];
  int i,max,min;

  for(i=0;i<20;i++) 
  {
    printf("Enter No-%d:",i+1);
    scanf("%d",&arr[i]);
  }
   max = min = arr[0];

   for(i=1;i<=19;i++)
   {
     if(max < arr[i])
        max = arr[i];
     if(min > arr[i])
        min = arr[i];
   }
   printf("Max = %d,Min = %d",max,min);
}