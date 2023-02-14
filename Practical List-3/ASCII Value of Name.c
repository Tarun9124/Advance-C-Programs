#include <stdio.h>

void main()
{
    char name[20];
    int i,l1,l2;
    printf("Enter Your Name :");
    gets(name);
    printf("\nASCII values of your Name :");
    for(i=0;name[i]!='\0';i++)
    {
        printf("\nASCII value of %c = %d",name[i],name[i]);
    }
}
