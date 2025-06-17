#include<stdio.h>

void main()
{
    char str[50];
    int i;
    int num=0,alp=0,sp=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            alp++;
        }
        else if((str[i]>='0') && (str[i]<='9'))
        {
            num++;
        }
        else if(str[i]!='\n')
        {
            sp++;
        }
    }
    printf("Number of alphabets: %d\n",alp);
    printf("Number of numbers: %d\n",num);
    printf("Number of special characters: %d",sp);
}