#include<stdio.h>

void main()
{
    int a,b;
    int *p,*q;
    a=20;
    b=10;
    p=&a;
    q=&b;
    printf("Sum: %d\n",*p+*q);
    printf("Difference: %d\n",*p-*q);
    printf("Product: %d\n",(*p)*(*q));
    printf("Division: %d",(*p)/(*q));
}
