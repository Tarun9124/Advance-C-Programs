#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ROUND(x) ((int)(x+0.5))
void main()
{
    float num;
    int n;
    div_t m;

    printf("Function SQUARE ROOT:\n");
    num = sqrt(0.64);
    printf("Square root of 0.64 = %f\n",num);

    printf("\nFunction POWER:\n");
    printf("(3.1 ^ 3) = %f\n", pow(3.1, 3));

    printf("\nFLOOR() and CEIL():\n");
    printf("floor(3.62) = %f\n",floor(3.62));
    printf("floor(3.41) = %f\n",floor(3.41));
    printf("ceil(3.62) = %f\n",ceil(3.62));
    printf("ceil(3.41) = %f\n",ceil(3.41));

    printf("\nFunction ABSOLUTE VALUE:\n");
    printf("abs(-6) = %d\n",abs(-6));
    printf("abs(11) = %d\n",abs(11));

    printf("\nLOG:\n");
    printf("log(10) = %f\n",log10(10));
    printf("log(3.1) = %f\n",log(3.1));

    printf("\nFunction SIN, COS, TAN:\n");
    printf("sin(30) = %f\n",sin(30*M_PI/180));
    printf("sin(45) = %f\n",sin(45*M_PI/180));
    printf("sin(60) = %f\n",sin(60*M_PI/180));
    printf("\ncos(30) = %f\n",cos(30*M_PI/180));
    printf("cos(45) = %f\n",cos(45*M_PI/180));
    printf("cos(60) = %f\n",cos(60*M_PI/180));
    printf("\ntan(30) = %f\n",tan(30*M_PI/180));
    printf("tan(45) = %f\n",tan(45*M_PI/180));
    printf("tan(60) = %f\n",tan(60*M_PI/180));

    printf("\nROUND():\n");
    printf("ROUND(3.62) = %d\n",ROUND(3.62));
    printf("ROUND(3.41) = %d\n",ROUND(3.41));

    printf("\nDIV():\n");
    m = div(6,4);
    printf("div(6,4):Quotient=%d Remainder=%d\n",m.quot,m.rem);
}