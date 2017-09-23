/* Equal sides of an array or Equilibrium index of an array */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int sum(int *,int);
int find_even_index(const int *, int );
void main()
{
  int values[]={1,2,3,4,5,4,3,2,1},a;
  a=find_even_index(values, 9);
  printf("index is %d\n",a );
  getch();
}

int find_even_index(const int *values, int length) {
 int i,j,k,sum1,sum2,*ptr,*ptr1;
  for(i=1;i<=length-1;i++)
  {
     ptr = (int*) malloc(i * sizeof(int));
   for(int j=0;j<i;j++)
   {

    ptr[j]=values[j];
    sum1=sum(ptr,i);
   }
    ptr1 = (int*) malloc(length-i * sizeof(int));
   for(k=i+1;k<=length;k++)
   {

    ptr1[k]=values[k];
    sum2=sum(ptr1,length-k);
   }
   if(sum1==sum2)
   return i;
  }
  return -1;
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
