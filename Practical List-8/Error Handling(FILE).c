#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    char fn[13];
    printf("Enter the name of file : ");
    scanf("%s",fn);
    
    if((fp = fopen(fn,"r")) == NULL)
    {
        printf("%s file does not exist. \n",fn);
        exit(0);
    }
    
    while(ch = getc(fp))
    {
        if(feof(fp))       
            break;
        putchar(ch);
    }
    fclose(fp);
}