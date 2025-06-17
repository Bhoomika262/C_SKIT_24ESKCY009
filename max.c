#include<stdio.h>

void main()
{
    int i,max=0,arr[10];
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum number: %d",max);
}