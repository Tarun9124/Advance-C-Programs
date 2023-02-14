#include <stdio.h>
union un_result{
              int roll_no;
              int m1;
              int m2;
              int total;
            }un;
struct str_result{
             int roll_no;
             int m1;
             int m2;
             int total;  
            }st;                           
void main()
{
  printf("%d\n",sizeof(un));
  printf("%d",sizeof(st));
}
