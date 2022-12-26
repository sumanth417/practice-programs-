#include<stdio.h>
int main(){
char input[100];
char sub[100];
int subctr=0;
int len=0;
int strpos=0;
printf("enter the string : ");
fgets(input,sizeof input, stdin);
printf("start pos extr: ");
scanf("%d",&strpos);
printf("len of sub\n");
scanf("%d",&len);
while(subctr<len){
    sub[subctr] = input[strpos+subctr-1];
    subctr++;
}
sub[subctr]='\0';
printf("extracted string is : \"%s\"",sub);
}
