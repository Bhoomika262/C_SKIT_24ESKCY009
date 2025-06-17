#include<stdio.h>

void main()
{
    int arr[10],sum=0,i;
    float avg;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/(10.0);
    printf("Sum of these 10 numbers is %d",sum);
    printf("\nAverage of these 10 numbers is %f",avg);
}