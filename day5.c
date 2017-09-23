/* Equal sides of an array or Equilibrium index of an array */
#include<stdio.h>
#include<stdlib.h>

int sum(int *,int);
int find_even_index(const int *, int );
void main()
{
  int values[]={1,2,3,4,5,4,3,2},a;
  a=find_even_index(values, 9);
  printf("index is %d\n",a );
  
}

int find_even_index(const int *values, int length) {
 int i,j,k,l,sum1,sum2,*ptr,*ptr1;
  for(i=1;i<=length-1;i++)
  {
     ptr = (int*) malloc(i * sizeof(int));
   for(j=0;j<i;j++)
   {

    ptr[j]=values[j];
    sum1=sum(ptr,i);
   }
    ptr1 = (int*) malloc((length-i) * sizeof(int));
   for(k=i+1,l=0;k<=length-1;k++)
   {

    ptr1[l]=values[k];
    l++;
    sum2=sum(ptr1,length-(i+1));
   }
   if(sum1==sum2)
   return i;
  }
  return -1;
}
int sum(int *arr,int n)
 {
   int i,sum=0;
   for(i=0;i<n;i++)
   {
     sum+=arr[i];
   }
   return sum;
 }
