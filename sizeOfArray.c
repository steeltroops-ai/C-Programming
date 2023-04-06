 #include <stdio.h>
 int main(){
     int a[]={1,2,3,4,5,6,7,8};
     printf("%d",sizeof(a)/sizeof(a[0]));
 }