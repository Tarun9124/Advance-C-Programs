//Write a program to prepare identity matrix of size 3 and print it in proper format. (Don’t initialize it. Assign values.) 
             /*  1 0 0 
                 0 1 0 
                 0 0 1 */

#include <stdio.h>
void main()
{
     int ans[3][3];
     int i,j,r=3,c=3;
     for(i=0;i<r;i++) 
     { 
       printf("|");
       for(j=0;j<c;j++)
       {
          ans[i][j] =!(i^j);
          printf("%d ",ans[i][j]);     
       }
       printf("|\n");
     }
}