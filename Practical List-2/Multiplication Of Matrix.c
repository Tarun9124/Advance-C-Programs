//Write a C program of multiplication of two 3×3 matrix.//

#include <stdio.h>
void main()
{
    int a[3][3],b[3][3],ans[3][3];
    int M,N,P,i,j,k;
    printf("First Matrix is M×P.\n");
    printf("Second Matrix is P×N.\n");
    printf("Enter M:");
    scanf("%d",&M);
    printf("Enter P:");
    scanf("%d",&P);
    printf("Enter N:");
    scanf("%d",&N);   
    printf("Enter First Matrix:\n");
    for(i=0;i<M;i++) 
     { 
       for(j=0;j<P;j++)
       {
          printf("Enter a[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
       }
     }
     printf("Enter Second Matrix:\n");
     for(i=0;i<P;i++) 
     { 
       for(j=0;j<N;j++)
       {
          printf("Enter b[%d][%d]:",i,j);
          scanf("%d",&b[i][j]);
       }
     }
     for(i=0;i<M;i++)   
     { 
        for(j=0;j<N;j++)
        {
          ans[i][j] = 0;
          for(k=0;k<P;k++)
          ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]);
        }
     }
    printf("\nAnswer Matrix:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%3d",ans[i][j]);
        }
        printf("\n");
    }
}