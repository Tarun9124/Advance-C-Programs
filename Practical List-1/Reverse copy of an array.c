//Write a program to reverse copy of an array//
#include<stdio.h>
#define N 4
void main()
{
    int src[N],dest[N];
    int i;
    //Input Source Array elements
    for(i=0; i<N; i++)
    {
        printf("Enter No-%d:",i+1);
        scanf("%d",&src[i]);
    }
    //Copy in Reverse
    for(i=0;i<N;i++)
    {
      dest[N-i-1] = src[i];
    }
    //Print copied array
    for(i=0;i<N;i++)
    {
      printf("dest[%d] -> %d\n",i,dest[i]);
    }

}