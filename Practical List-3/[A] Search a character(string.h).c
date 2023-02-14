#include <string.h>
#include <stdio.h>
void main()
{
    char c,str[20];
    int i,f=0;
    char *p;
    printf("Enter string :");
    gets(str);
    printf("Enter a character to search :");
    scanf("%c",&c);
    p = strchr(str,c);
    if(p)
    printf("%c exist in %s at %d place",c,str,p-str+1);
    else
    printf("%c does not exist in %s",c,str);
}