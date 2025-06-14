#include<stdio.h>

void main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nSum of first %d natural numbers is:%d ",n,sum);
}