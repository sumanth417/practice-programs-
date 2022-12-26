#include<stdio.h>
int main(){
int a[50],n,i,num;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements in array:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter the element to be found:");
scanf("%d",&num);
for(i=0;i<n;i++){
        if(a[i]==num){
printf("element is found and index is %d",i);
return 0;
}
}
printf("not found");
}
