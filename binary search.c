#include <stdio.h>
int main()
{
int size,target,right,left,mid,found=0;
printf("enter the number of size:");
scanf("%d",&size);
int arr[size];
printf("enter the %d numbers:\n",size);
for(int i=0;i<=size;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the target:");
scanf("%d",&target);
left=0;
right=size-1;
while(left<=right)
{
    mid=(left+right)/2;
    if(arr[mid]==target)
    {


        printf("the target is fount %d size",mid);
      return 0;
    }

      else if(arr[mid]<target)
        left=mid+1;

      else
        right=mid-1;

}
if(!found)
{
    printf("target does not found");

}
return 0;
}








