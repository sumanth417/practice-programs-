#include<stdio.h>
int main(){
int a,b;
printf("enter the two numbers\n");
scanf("%d %d", &a, &b);
a=a^b;
b=a^b;
a=a^b;
printf("the number after swapping %d %d\n",a,b);
}
