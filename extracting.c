
#include<stdio.h>
int main(){
    int num,k,p;
    printf("enter the number");
    scanf("%d", &num);
    printf("enter the value k");
    scanf("%d", &k);
    printf("enter the value p");
    scanf("%d", &p);
    printf("the extracted num is %d",extract(num,k,p));
}

int extract(int num,int k,int p){
    return (((1<<k)-1)&(num>>(p-1)));
}
