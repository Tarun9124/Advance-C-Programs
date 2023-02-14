#include <stdio.h>
struct player{
            char playername[20];
            char teamname[20];
            int score;
            float avg;
           }M[5];
void main()
{
  int i;
  for(i=0;i<5;i++){
      printf("Enter Player Name:%d-",i+1);
      scanf("%s",&M[i].playername);
      printf("Enter Team Name:");
      scanf("%s",M[i].teamname);
      printf("Enter Score:");
      scanf("%d",&M[i].score);
      printf("Enter Average:");
      scanf("%d",&M[i].avg);
      printf("\n");
      }
    printf("|Player Name|\t|Teamname|\t|Score|\t|Average|\n");
    for(i=0;i<5;i++)
    printf("|%s|\t|%s|\t|%d|\t|%2f|\n",M[i].playername,M[i].teamname,M[i].score,M[i].avg);
}