#include <stdio.h>

void main()
{
    char c,C,str[20];
    int i,f=0;
    printf("Enter string :");
    gets(str);
    printf("Enter character :");
    scanf("%c",&c);
    if(c>='a'&&c<='z')
    C = c-32;
    else
    C = c+32;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c || str[i]==C)
            f++;
    }
    if(f)
    printf("In sttring %s : %c or %c is %d times",str,C,c,f);
    else
    printf("%c or %c does not exist in string %s",C,c,str);
}