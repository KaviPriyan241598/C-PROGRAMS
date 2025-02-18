#include<stdio.h>
void swap(int x,int y)//5,6

{
   int temp=x;
      x=y;
      y=temp;
}int main()
{
    int a=5;
    int b=6;
    printf(" %d %d\n",a,b);//5,6
    swap(a,b);
    printf(" %d %d",a,b);
}
