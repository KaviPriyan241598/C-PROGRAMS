#include<stdio.h>
void main()
{
    char a[59];
    printf(" enter your name ");
    scanf("%[^\n]",a);
    printf(" name: %s",a);
}
