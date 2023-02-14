#include <stdio.h>
void main()
{
    char str1[10],str2[10],merge[20];
    int i,l1,l2;
    printf("Enter first string :");
    gets(str1);
    printf("Enter second string :");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    l1 = i; 
    for(i=0;str2[i]!='\0';i++);
    l2 = i;
    for(i=0;str1[i]!='\0';i++)
    {
        merge[i] = str1[i];
    }
    merge[l1] = '@';
    for(i=0;str2[i]!='\0';i++)
    {
        l1++;
        merge[l1] = str2[i];
    }
    merge[l1+1] = '\0';
    printf("%s",merge);
}