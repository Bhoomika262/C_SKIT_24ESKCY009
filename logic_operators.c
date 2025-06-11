#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>0&&b>0)
    {
        printf("Both are positive\n");
    }
    else if(a>0||a<10)
    {
        printf("Atleast one is positive\n");
    }
    if(!(a==b))
    {
        printf("Both are not equal");
    }
}