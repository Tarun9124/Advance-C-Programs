#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("No of argument = %d\n",argc);
    for(i=0;i<argc;i++)
        printf("\nargv[%d] = %s",i,argv[i]);    
    return 0;
}