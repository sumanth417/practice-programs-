#include<stdio.h>
int temp(){
int temperature;
printf("enter the temperature");
scanf("%d",&temperature);
if(temperature<20){
printf("cold");
}
else if(temperature>20){
printf("hot");
}
}
int main(){
temp();
}
