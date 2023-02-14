#include <stdio.h>
union sample{
              char ch;
              int in;
              float fl;
            };
union sample sam;         
void main()
{
  printf("Enter a character:");
  scanf("%c",&sam.ch);
  printf("Enter an integer:");
  scanf("%d",&sam.in);
  printf("Enter a float:");
  scanf("%f",&sam.fl);
  printf("%c\n%d\n%f\n",sam.ch,sam.in,sam.fl);
}
