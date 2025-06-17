#include<stdio.h>

int isprime(int);

void main()
{
    int a,b,i;
    printf("Enter two numbers(1st should be smaller than 2nd): ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            printf("%d\n",i);
        }
    }
}

int isprime(int n)
{
    int j;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
         return 0;
    }
    return 1;
}