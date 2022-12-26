#include<stdio.h>
#define size1 3
#define size2 3
int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int j,i,*p[size1][size2];
for(i=0;i<size1;i++)
for(j=0;j<size2;j++)
p[i][j]=&arr[i][j];
for(i=0;i<size1;i++)
for(j=0;j<size2;j++)
printf("%d ",*p[i][j]);
}
