#include <stdio.h>
int main(){
    int n,x;
    printf("Enter the number :");
    scanf("%d",&n);
    while(x>n){ 
        x=x+2;
        printf(x);
    }
    return 0;
}