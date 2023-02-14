#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp;
    char fn1[13],fn2[13],ch;
    
    //create and store data in file -1
    printf("Enter first file name : ");
    scanf("%s",fn1);
    printf("Enter file contain : \n");
    fp1 = fopen(fn1,"w");
    while((ch = getchar()) != EOF)
    {
        putc(ch,fp1);
    }
    fclose(fp1);
    printf("\n%s file is created.",fn1);
    
    //create and store data in file -2
    printf("Enter second file name : ");
    scanf("%s",fn2);
    printf("Enter file contain : \n");
    fp2 = fopen(fn2,"w");
    while((ch = getchar()) != EOF)
    {
        putc(ch,fp2);
    }
    fclose(fp2);
    printf("\n%s file is created.",fn2);
    
    //Merge both the file in third file.
    fp = fopen("third.txt","w");
    if((fp1 = fopen(fn1,"r")) == NULL)
    {
        printf("%s file is not exist.",fn1);
        exit(0);
    }
    while((ch = getc(fp1)) != EOF)
    {
        putc(ch,fp);
    }
    fclose(fp1);
    
    if((fp2 = fopen(fn2,"r")) == NULL)
    {
        printf("%s file is not exist.",fn2);
        exit(0);
    }
    while((ch = getc(fp2)) != EOF)
    {
        putc(ch,fp);
    }
    fclose(fp2);
    fclose(fp);
    
    //Print merge file
    printf("\nContain of merge file.\n");
    if((fp = fopen(fp,"r")) == NULL)
    {
        printf("third.txt file is not exist.");
        exit(0);
    }
    while((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}