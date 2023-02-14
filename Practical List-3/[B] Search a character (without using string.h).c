#include <stdio.h>

void main()
{
    char c,str[20];
    int i,p,f=0;
    printf("Enter string :");
    gets(str);
    printf("Enter a character to search :");
    scanf("%c",&c);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            p = i+1;
            break;
        }
    }
    if(p)
    printf("%c exist in %s at %d place",c,str,p);
    else
    printf("%c does not exist in %s",c,str);
}