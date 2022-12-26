
#include<stdio.h>
void main()
{
int n,i,mul=1;
printf("enter the num");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
mul=n*i;
printf("%d * %d = %d \n",n,i,mul);
}
}
