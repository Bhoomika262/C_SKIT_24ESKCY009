#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The largest number is: %d",(a>b?(a>c?a:c):(b>c?b:c)));
}