#include<stdio.h>
void swap(int*x,int*y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
    printf("after swapping x=%d y=%d\n",*x,*y);
}
int main()
{
    int a,b;
    a=10;
    b=20;
    printf(" before swapping a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping a=%d b=%d\n",a,b);
}
