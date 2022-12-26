#include<stdio.h>
void print(int cnt)
{
 if(cnt<=50)
 {
 printf("%d brigosha\n",cnt);
 print(cnt+1);
 }
}
int main()
{
 int i=1;
 print(i);
}

