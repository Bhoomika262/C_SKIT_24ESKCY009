#include<stdio.h>

void main()
{
    int a,b,temp;
    int *p,*q;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("Before swap : %d %d\n",*p,*q);
    temp= *p;
    *p=*q;
    *q=temp;
    printf("After swap: %d %d",*p,*q);
}