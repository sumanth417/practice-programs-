#include<stdio.h>
int main()
{
int i,n;
printf("enter n value");
scanf("%d",&n);
printf("enter the %d number in array",n);
   int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("the array elements are");
for(i=0;i<n;i++)
{
 printf(" %d \n",a[i]);
}
printf("after reversing");
for(i=n-1;i>=0;i--)
{
 printf(" %d",a[i]);

}
}
