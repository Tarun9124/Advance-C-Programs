#include <stdio.h>
void main()
{
    char str[20],rev[20];
    int i,l;
    printf("Enter a string to reverse :");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    l = i;
    for(i=0;str[i]!='\0';i++,l--)
    {
        rev[i] = str[l-1]; 
    }
    rev[i] = '\0';
    printf("%s in reverse : %s",str,rev);
}