//show elements of array using pointer
#include<stdio.h>
int main(){
int a[]={5,3,5,6,43},i;
int *ptr=&a[0];
for(i=0;i<5;i++){
printf("%d ",*(ptr+i));
}
}
