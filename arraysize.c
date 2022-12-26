#include<stdio.h>
int main()
{
int i,n,size;
printf("enter n value");
scanf("%d",&n);
printf("enter the number in array");
   int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("the array elements are");
for(i=0;i<n;i++)
{
 printf(" %d",a[i]);

}
size=n/a[0];
printf("\n no of elements in an array is %d \n",size);

printf("size of array is %d",sizeof(a));

}
