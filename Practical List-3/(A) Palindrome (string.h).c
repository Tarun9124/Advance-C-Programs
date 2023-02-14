#include <stdio.h>
#include <string.h>
void main()
{
    char str[20],rev[20];
    printf("Enter a string :");
    gets(str);
    strcpy(rev,str);
    strrev(rev);
    if(strcmp(rev,str) != 0)
    printf("%s is not Palindrome",str);
    else
    printf("%s is Palindrome",str);
}