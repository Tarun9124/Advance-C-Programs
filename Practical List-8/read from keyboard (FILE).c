#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    //read from keyboard
    fp = fopen("DATA.txt","w");
    printf("Enter contain of file : ");
    
    while((ch = getchar()) != EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
    
    //read from file
    fp = fopen("DATA.txt","r");
    while((ch = gets(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}