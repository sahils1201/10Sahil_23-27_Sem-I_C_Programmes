#include<stdio.h>
int main()
{
    int a,i;
    int fact = 1;

    printf("ENTER NUMBER TO CALCULATE FACTORIAL - ");
    scanf("%d",&a);

    for(i=a;i>=1;i--)
    {
        fact=fact*i;

    }
    printf("FACTORIAL VALUE IS - %d",fact);

}