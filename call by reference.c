#include<stdio.h>
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=4;
    int b=7;
    printf(" %d %d",a,b);
    swap(a,b);
    printf(" %d %d",a,b);
}
