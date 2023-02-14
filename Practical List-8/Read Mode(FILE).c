#include<stdio.h>
int main()
{
    FILE *fp;
    char fn[13],ch;
    
    printf("Enter file name : ");
    scanf("%s",fn);
    
    if((fp = fopen(fn,"r")) == NULL)
    {
        printf("%s file is not exist.",fn);
        exit(0);
    }
    printf("\nContain of %s file : \n",fn);
    while((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}