#include <stdio.h>
struct student{
            int roll_no;
            char name[20];
            int mark[3];
           }S[5];
void main()
{
  int i,j;
  for(i=0;i<5;i++){
      printf("Enter for %d student:\n",i+1);
      printf("Enter Roll No.:");
      scanf("%f",&S[i].roll_no);
      printf("Enter student name:");
      scanf("%s",S[i].name);
      for(j=0;j<3;j++){
      printf("Enter Marks-%d:",j+1);
      scanf("%d",&S[i].mark[j]);
      }
      printf("\n");
      }
    printf("|Roll No|\t|Name|\t|Mark-1|\t|Mark-2|\t|Mark-3|\n");
    for(i=0;i<5;i++){
    printf("|%d|\t|%s|\t|",S[i].roll_no,S[i].name);
    for(j=0;j<3;j++)
    printf("|%d|\t",S[j].mark[j]);
    printf("\n");}
}