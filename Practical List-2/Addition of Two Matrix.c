//Write a program to add two matrices and store its answer into the third one of n × n size.//

#include  <stdio.h>
#define R 5
#define C 5
void main()
{
    int a[R][C],b[R][C],ans[R][C];
    int i,j,r,c;
    printf("Enter Row in Matrix:");
    scanf("%d",&r);
    printf("Enter Column in Matrix:");
    scanf("%d",&c);
    printf("Enter values for First Matrix:\n");
    for(i=0;i<r;i++) 
     { 
       for(j=0;j<c;j++)
       {
          printf("Enter a[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
       }
     }
     printf("Enter values for Second Matrix:\n");
     for(i=0;i<r;i++) 
     { 
       for(j=0;j<c;j++)
       {
          printf("Enter b[%d][%d]:",i,j);
          scanf("%d",&b[i][j]);
       }
     }
     printf("Result After Matrix Addition:\n"); 
     for(i=0;i<r;i++)   
     { 
        for(j=0;j<c;j++)
        {
          ans[i][j] = a[i][j] + b[i][j];
          printf("%3d",ans[i][j]);
        }
        printf("\n");
     }
}