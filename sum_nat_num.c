#include<stdio.h>

int sum(int);

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d",n,sum(n));
}

int sum(int a)
{
    return a*(a+1)/2;
}