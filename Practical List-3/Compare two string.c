#include <stdio.h>

void main()
{
    char str1[20],str2[20];
    int i,j,l1,l2,f=0;
    printf("Enter string in upper case :");
    gets(str1);
    printf("Enter string in lower case :");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    l1 = i;
    for(j=0;str2[j]!='\0';j++);
    l2 = j;
    if(l1==l2)
    {
        for(i=0;str1[i]!='\0';i++)
        {
            if(str1[i]+32!=str2[i])
            {
                f++;
                break;
            }
        }
    if(f)
    printf("Both string are different");
    else
    printf("Both string are same");
    }
    else
    printf("Both string are different");
}