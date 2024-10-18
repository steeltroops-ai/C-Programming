#include <stdio.h>
void main(){
    int x=1,n;
    printf("Enter the number :");
    scanf("%d",&n);
    while(x<=10){
        printf("%d x %d = %d\n",n,x,n*x);
        x++;
    }
}