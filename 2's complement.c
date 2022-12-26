#include<stdio.h>
#define bin 8
void main(){
int i, carry = 1;
   char num[bin+1], one[bin+1], two[bin+1];
   printf("Enter the binary number");
   gets(num);

   for(i = 0; i < bin; i++){
      if(num[i] == '0'){
         one[i] = '1';
      }
      else if(num[i] == '1'){
         one[i] = '0';
      }
   }
   one[bin] = '\0';
   printf("Ones' complement of binary number %s is %s",num, one);
for(i = bin - 1; i >= 0; i--){
      if(one[i] == '1' && carry == 1){
         two[i] = '0';
      }
      else if(one[i] == '0' && carry == 1){
         two[i] = '1';
         carry = 0;
      }
      else{
         two[i] = one[i];
      }
   }
   two[bin] = '\0';
   printf("\nTwo's complement of binary number %s is %s",num, two);

}

