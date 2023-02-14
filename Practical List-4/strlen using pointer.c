#include<stdio.h>
void main()
{
    char str[10];
    char *p[10];
    int i,len;
    for(i=0;i<10;i++)
	   p[i]=&str[i];
    printf("Enter string:");
    gets(str);
    for(i=0;*p[i]!='\0';i++);
    len=i;
    printf("Length of String: %d",len);
}