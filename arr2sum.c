#include<stdio.h>
void main()
{
int i,sum=0;
int a[5]={1,2,3,4,5};
int b[5]={2,3,4,5,67};
for(i=0;i<5;i++){
printf("%d \n",a[i]);
}
for(i=0;i<5;i++)
{
printf("%d \n",b[i]);
}
for(i=0;i<5;i++){
sum=a[i]+b[i];
printf("sum = %d \n",sum);
}

}
