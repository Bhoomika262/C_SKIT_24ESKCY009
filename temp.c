#include<stdio.h>

void main()
{
    float cel,fah;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&cel);
    fah=(cel*9/5)+32;
    printf("Temerature in celsius: %f\nTemperature in fahrenheit: %f",cel,fah);
}