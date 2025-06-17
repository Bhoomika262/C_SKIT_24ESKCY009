#include<stdio.h>

void main()
{
    int n,i,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d",n,f);
}