#include<stdio.h>

void main()
{
    int arr1[9],arr2[9],i,j,k,sum[9];
    printf("Enter the elements of first matrix: ");
    for(i=0;i<9;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of second matrix: ");
    for(i=0;i<9;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<9;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    i=0;
    for(k=0;k<3;k++)
    {
        for(j=0;j<3;j++)
        { 
            printf("%d ",sum[i]);
            i++;
        }
        printf("\n");
    }
}