#include<stdio.h>
void main()
{
    int largest,i;
    int arr[5]={70,30,40,50,60};
    largest =arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        printf("%d\n",largest);
    }

}
