#include <stdio.h>
int main() {
  int n;
  printf("enter the value of n:");
  scanf("%d",&n);
   for (int num=1;num<=n;num++){
       if (num%2==0){
           printf("even  numbers from 1-n :%d\n",num);
       }
   }
   return 0;
}
