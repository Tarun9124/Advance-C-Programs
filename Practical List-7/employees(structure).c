#include <stdio.h>
struct student{
            int Emp_id;
            char name[20];
            struct date{
            int d;
            int m;
            int y;
            }DOB,DOJ;
           }S[3];
void main()
{
  int i,j;
  for(i=0;i<3;i++){
      printf("Enter for %d Employees:\n",i+1);
      printf("Enter Employee Id:");
      scanf("%d",&S[i].Emp_id);
      printf("Enter Employee name:");
      scanf("%s",S[i].name);
      printf("Enter Birth date:");
      scanf("%d",&S[i].DOB.d);
      printf("Enter Birth Month:");
      scanf("%d",&S[i].DOB.m);
      printf("Enter Birth year:");
      scanf("%d",&S[i].DOB.y);
      printf("Enter join date:");
      scanf("%d",&S[i].DOJ.d);
      printf("Enter join month:");
      scanf("%d",&S[i].DOJ.m);
      printf("Enter join year:");
      scanf("%d",&S[i].DOJ.y);
      printf("\n");
      }
    printf("|Employee Id|\t|Name|\t|Birthdate|\t|DOJ|\n");
    for(j=0;j<3;j++)
    printf("%d\t%s\t%d:%d:%d\t%d:%d:%d\n",S[i].Emp_id,S[i].name,S[i].DOB.d,S[i].DOB.m,S[i].DOB.y,S[i].DOJ.d,S[i].DOJ.m,S[i].DOJ.y);  
}