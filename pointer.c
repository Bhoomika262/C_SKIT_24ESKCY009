#include<stdio.h>

void main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("Address of %d is %d",a,p);
}