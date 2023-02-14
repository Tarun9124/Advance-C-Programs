#include<stdio.h>
void main()
{
	int n;
	int *p,**ptp;
    p=&n;
    ptp=&p;
	printf("Enter number:");
	scanf("%d",&n);
    if(**ptp<0)
        printf("%d is negative",**ptp);
    else
        printf("%d is positive",**ptp);
}