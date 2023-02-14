#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("Enter text: ");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
       if(isupper(ch))
          printf("It's Letter in uppercase.");
       else if(islower(ch))
          printf("It's Letter in lowercase.");
    }
    else if(isdigit(ch))
       printf("It's Digit");
    else if(ispunct(ch))
       printf("It's Symbol");
}

