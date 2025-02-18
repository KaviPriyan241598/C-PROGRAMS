#include<stdio.h>
void main()
{
    int n,digit,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;

    }
    printf("amstrong no %d",sum);

}
