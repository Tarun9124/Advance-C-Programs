#include <stdio.h>
struct book{
            int book_id;
            char title[20];
            int price;
           }s[3];
void main()
{
  int i;
  for(i=0;i<3;i++){
      printf("Enter book Id:%d-",i+1);
      scanf("%d",&s[i].book_id);
      printf("Enter book title:");
      scanf("%s",s[i].title);
      printf("Enter book price:");
      scanf("%d",&s[i].price);
      printf("\n");
      }
    printf("|Book_Id|\t|Book_title|\t|Book_Price|\n");
    for(i=0;i<3;i++)
    printf("|%d|\t|%s|\t|%d|\n",s[i].book_id,s[i].title,s[i].price);




}