#include <stdio.h>

void main()
{
    char str[20],rev[20];
    int i,l;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    l = i;
    for(i=0;str[i]!='\0';i++,l--)
    {
        if (str[i]>='A' && str[i]<='Z')
            rev[i] = str[i]+32;
        else if (str[i]>='a' && str[i]<='z')
            rev[i] = str[i]-32;
        else 
            rev[i] = str[i];
    }
    rev[i] = '\0';
    printf("%s in reverse case :%s",str,rev);
}