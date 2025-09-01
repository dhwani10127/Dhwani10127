// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    float p,r,n,i;
    printf("enter principal amount:");
    scanf("%f", &p);
    printf("enter rate of interest:");
    scanf("%f", &r);
    printf("enter time in years:");
    scanf("%f", &n);
    i= p*r*n/100;
    printf("interest is: %f\n",i);
}