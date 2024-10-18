#include<stdio.h>
void main(){
   int i, num, n, c;
   printf("Enter number: \n");
   scanf("%d", &n);
   printf("prime numbers %d:",n);
   for(num = 1;num<=n;num++){
      c = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            c++;
         break;
      }
   }
   if(c==0 && num!= 1)
      printf("%d ",num);
   }
}