#include<stdio.h>
int main()
{
    int a,b;
    int sum;
    printf("Please Enter number a= ");
    scanf("%d",&a);

    printf("Please Enter number b= ");
    scanf("%d",&b);

    sum = a + b;
    printf("%d + %d = %d", a,b,sum);

    return 0;
}