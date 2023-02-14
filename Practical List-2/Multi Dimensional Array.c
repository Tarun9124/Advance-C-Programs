//Write a program to declare an array of 3-dimension (3 × 2 × 4), initialize its elements and print them.//

#include <stdio.h>
void main()
{
     int a[3][2][4]={{{1,2,3,4},{4,3,2,1}},
                     {{1,2,3,4},{4,3,2,1}},
                     {{1,2,3,4},{4,3,2,1}}};
     int i,j,k;
     for(i=0;i<3;i++) 
     { 
       printf("Array-%d:\n",i+1);
       for(j=0;j<2;j++) 
       {
          for(k=0;k<4;k++)
          printf("%3d ",a[i][j][k]);     
          printf("\n");
       }
     }
}