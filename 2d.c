#include<stdio.h>
int main(){
int a[3][2]={1,2,3,4,5,6};
int i,j,*p;
for(i=0;i<3;i++)
for(j=0;j<2;j++)
    p=&a[i][j];
printf("%d",*p);
}
