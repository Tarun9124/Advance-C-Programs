#include <stdio.h>
int len(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}
void main()
{
    char str[20];
    int l;
    printf("Enter string :");
    scanf("%s",str);
    l = len(str);
    printf("Length of string : %d",l);
}