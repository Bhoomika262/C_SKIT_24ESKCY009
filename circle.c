#include<stdio.h>

void main()
{
    float r,a,c;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area=%f\nCircumference:%f",a,c);
}