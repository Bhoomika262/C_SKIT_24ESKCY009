#include<stdio.h>

void main()
{
    int a=10,*p,**q;
    p=&a;
    q=&p;
    printf("a=%d",a);
    printf("\nAdress of a: %d",p);
    printf("\nAdress of adress of a: %d",q);
}