#include <stdio.h>
int fact(int r){
    int mul=1;
    for(int i=1;i<=r;i++){
        mul=mul*i;
    }
    return mul;
}
int main(){
    int n,r,k=n;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(k!=0){
        r=k%10;
        int f=fact(r);
        k=k/10;
        sum=sum+f;
    }
    if(sum==n){
        printf("\nNumber is Strong.");
    }
    else{
    printf("\nNumber is not Strong.");
    }
    return 0;
}
