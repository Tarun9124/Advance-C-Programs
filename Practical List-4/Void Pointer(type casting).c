#include<stdio.h>
void main()
{
    int n=12;
    float f=99.20;
    void *p;
    p=&n;
    printf("Value of integer variable is : %d\n",*((int*)p));
    p=&f;
    printf("Value of float variable is : %f",*((float*)p));
}