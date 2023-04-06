#include <stdio.h>
int main(){
    int n , x=1;
        printf("Enter the number :");
        scanf("%d",&n);
        while(x<=n){
            x=x++;
            printf(x);
        }
        return 0;
}