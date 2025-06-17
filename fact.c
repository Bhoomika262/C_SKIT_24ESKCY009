#include<stdio.h>

int fact(int);
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}

int fact(int a)
{
    if(a==0||a==1)
    return 1;
    else
    return a*fact(a-1);
}