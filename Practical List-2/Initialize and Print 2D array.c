#include<stdio.h>
void main()
{
  int a[3][4] = {{1,2,3,4},
                 {1,2,3,4},
                 {1,2,3,4}};
  int i,j;        
  float d[2][3] = {{1.11,2.22,3.33},
                   {4.44,5.55,6.66}};
  for(i=0;i<3;i++)
  { 
   printf("|");
   for(j=0;j<4;j++)
   printf("%2d",a[i][j]);
   printf("|");
   printf("\n");
  }
   
  for(i=0;i<2;i++)
  {
   printf("|");
   for(j=0;j<3;j++)
   printf("%6.2f",d[i][j]);
   printf("|");
   printf("\n");
  }
}




