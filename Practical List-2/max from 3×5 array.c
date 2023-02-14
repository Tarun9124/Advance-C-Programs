//Write a program to find the maximum from the 3 × 5 array of integers.//

#include<stdio.h> 
int main()
{ 
       int max,arr[3][5], i, j;  
       for(i=0;i<3;i++) 
       {
           for(j=0;j<5;j++) 
           { 
               printf("Enter arr[%d][%d]: ",i,j);
               scanf("%d", &arr[i][j]); 
           } 
           printf("\n"); 
       } 
       max=arr[0][0];
       for(i=0;i<3;i++) 
       { 
         for(j=0;j<5;j++)
         { 
           if(max<arr[i][j])
             max=arr[i][j];
         }
       } 
       printf("\n"); 
       printf("Maximum element in array is %d\n", max); 
       return 0; 
}

