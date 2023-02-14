#include<stdio.h>
void main()
{
  int org[4][3],copy[4][3];
  int i,j;
  printf("Enter Array elements:");
  for(i=0;i<4;i++)
  {
    printf("Enter Row-%d:",i+1);
    for(j=0;j<3;j++)
    {
     scanf("%d",&org[i][j]);
    }
  }
  printf("Entered Array:\n");
  for(i=0;i<4;i++)
  { 
    for(j=0;j<3;j++)
    {
      printf("%3d",org[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<4;i++)
  { 
    for(j=0;j<3;j++)
    {
    copy[i][j] = org[i][j];
    }
  }

  printf("copied Array:\n");
  for(i=0;i<4;i++)
  { 
    for(j=0;j<3;j++)
    {
      printf("%3d",copy[i][j]);
    }
    printf("\n");
  }












}