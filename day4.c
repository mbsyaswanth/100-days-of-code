#include<stdio.h>
int sum(int *,int);
void main()
{
  int arr[]={1,2,3,4,5,6,7,8,9},a;
  a=sum(arr,8);
  printf("the sum is %d\n",a );
}

int sum(int *arr,int n)
 {
   int i,sum=0;
   for(i=0;i<=n;i++)
   {
     sum+=arr[i];
   }
   return sum;
 }
