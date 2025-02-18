#include<stdio.h>
int main()
{
    float miles,km;
    printf("enter the miles");
    scanf("%f",&miles);
    km= miles*1.60934;
    printf("kilometers: %.2f\n  ",km);
    return 0;
    }

