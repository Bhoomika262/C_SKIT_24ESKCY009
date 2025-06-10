#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
    printf("Difference of %d and %d is %d\n",a,b,a-b);
    printf("Product of %d and %d is %d\n",a,b,a*b);
    printf("Quotient on dividing %d by %d is %d\n",a,b,a/b);    
}