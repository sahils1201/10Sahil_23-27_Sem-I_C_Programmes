#include <stdio.h>

int main() 
{
   int a, b, c;
   
   printf("Enter value for a :  ");
   scanf("%d", &a);
   
   printf("Enter value for b :  ");
   scanf("%d", &b);
   
   c = a;
   a = b;
   b = c;
   
   printf("After swapping, a is: %d\n", a);
   printf("After swapping, b is: %d\n", b);
   
   return 0;
}
