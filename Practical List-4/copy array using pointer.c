#include<stdio.h>
void main()
{
	int i,a[5],c[5];
	int *p[5];
	for(i=0;i<5;i++)
		p[i]=&a[i];
	for(i=0;i<5;i++)
	{
	    printf("Enter no.%d: ",i+1);
	    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
        c[i]=*p[i];
    printf("Coppied array :");
    for(i=0;i<5;i++)
        printf("%d ",c[i]);
}