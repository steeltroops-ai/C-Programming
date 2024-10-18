#include<stdio.h>
int main(){
    int n,r,sum=0,temp;
    printf("Enter the Number :");
    scanf("%d",&n);

    temp=n;
    while(n>0){
        r=r%10;
        sum=(sum*temp)+r;
        n=n/10;
    }
    if (temp==sum)printf("Palindrom Number");
    else printf("Not a Palindrom Number");
}