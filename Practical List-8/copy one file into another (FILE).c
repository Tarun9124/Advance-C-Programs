#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    
    fp1 = fopen("file.txt","w");
    printf("Enter contain of file : ");
    while((ch = getchar()) != EOF)
    {
        putc(ch,fp1);
    }
    fclose(fp1);
    
    
    fp1 = fopen("flie.txt","r");
    fp2 = fopen("new.txt","w");
    while((ch = getc(fp1)) != EOF)
    {
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    
    printf("\n Content of copied file : \n");
    fp2 = fopen("new.txt","r");
    while((ch = getc(fp2)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp2);
}