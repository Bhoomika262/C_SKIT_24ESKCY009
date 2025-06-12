#include<stdio.h>

void main()
{
    int a,b,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n;
    b=++a;
    printf("Pre increment: a=%d, b=%d\n",a,b);
    a=n;
    b=a++;
    printf("Post increment: a=%d, b=%d\n",a,b);
    a=n;
    b=--a;
    printf("Pre decrement: a=%d, b=%d\n",a,b);
    a=n;
    b=a--;
    printf("Post decrement: a=%d, b=%d",a,b);
}