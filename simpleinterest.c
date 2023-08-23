#include<stdio.h>

int main()
{
    float P, n;
    float r=9.5;

    printf("Enter Principle = ");
    scanf("%f", &P);
    printf(" Enter Years = ");
    scanf("%f", &n);

    float SI= (P*r*n)/100;
    float AMT = (SI + P);

    printf("Your SI is %f",SI);
    printf("Your Amount is %f", AMT);

}