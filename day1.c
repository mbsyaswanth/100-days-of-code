#include<stdio.h>
int count(int *,int);
void main()
{
  int arr[7]={1,2,3,4,3,2,1};
  int *values;
  values=arr;
  printf("the num in values is %d\n",*arr);
  printf("The count is %d",count(arr,7));
}
int count(int *arr,int a)
 {
   int count=0,i=0;
   while(i<a)
   {
     count=count+(*arr);
     printf("arr is%d\n",*arr );
     i++;
     arr++;
   }
   return count;
 }
