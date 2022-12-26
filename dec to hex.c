#include<stdio.h>
int main(){
int b;
int a[10],i;
printf("enter the hexa value to be converted to binary: ");
scanf("%x",&b);
printf("%d\n",b);
for(i=0;b>0;i++){
    a[i]=b%2;
    b=b/2;
}
printf("the binary of the digit is : ");
for(i=i-1;i>=0;i--){
    printf("%d",a[i]);
}
}
