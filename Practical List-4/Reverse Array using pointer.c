#include<stdio.h>
void main()
{
	 int i,a[5],rev[5];
 	int *p[5],*r[5];
	 for(i=0;i<5;i++)
	 {
	 	p[i]=&a[i];
	 	r[i]=&rev[i];
  	}
	  for(i=0;i<5;i++)
	{
	    printf("Enter no.%d: ",i+1);
	    scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
        *r[4-i]=*p[i];
    printf("Array in Reverse :");
    for(i=0;i<5;i++)
        printf("%d ",rev[i]);
}