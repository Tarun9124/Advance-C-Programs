#include <stdio.h>
void main()
{
    char str1[20],str2[20];
    int i,l1,l2;
    printf("Enter first string :");
    gets(str1);
    printf("Enter second string :");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    l1 = i; 
    for(i=0;str2[i]!='\0';i++);
    l2 = i;
    if(l1==l2)
    printf("\nBoth strings are same");
    else
    {
        if(l1 > l2)
        {
            printf("\nString 1 is larger\n");
            printf("String 2 is smaller\n");
        }
        else
        {
            printf("\nString 2 is larger\n");
            printf("String 1 is smaller\n");
        }
    }
}
