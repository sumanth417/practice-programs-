
#include<stdio.h>
int main()
{
int i,min,max,n;
printf("enter n value");
scanf("%d",&n);
int a[n];
printf("enter %d numbers",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

min=max=a[0];
for(i=1;i<5;i++)
{
if(min>a[i])
{
min=a[i];
}

}
for(i=1;i<n;i++){
if(max<a[i])
{
max=a[i];
}
}
printf("\n min value is %d",min);
printf("\n max value is %d",max);


}
