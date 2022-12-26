#include<stdio.h>
void main(){
int a[8]={2,1,2,4,4,3,4,8};
int len,i,j;
len=sizeof(a)/sizeof(a[0]);
printf("the dup elements are: ");
for(i=0;i<len;i++){
for(j=i+1;j<len;j++){
if(a[i]==a[j])
{
printf("%d ",a[j]);
}
}
}

}
