#include <stdio.h>
void sort(char []);
void main()
{
    char str[20];
    printf("Enter string :");
    scanf("%s",str);
    sort(str);
}
void sort(char s[])
{
    int len,i,j;
    char t;
    for(i=0;s[i]!='\0';i++);
    len = i;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s[i] > s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    printf("Sorted string : %s",s);
}