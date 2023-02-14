#include <stdio.h>

void main()
{
    char str[20],rev[20];
    int i,l,f=0;
    printf("Enter a string :");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    l = i;
    for(i=0;str[i]!='\0';i++,l--)
        rev[i] = str[l-1];
    rev[i] = '\0';
    for(i=0;str[i]!='\0';i++,l--)
    {
        if(rev[i] != str[i])
            f++;
    }
    if(f)
    printf("%s is not Palindrome",str);
    else
    printf("%s is Palindrome",str);
}