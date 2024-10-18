#include<stdio.h>
int main(){
    int num;
    printf("Enter the desired number...");
    scanf("%d",&num);

    switch(num%2==0){
        case 1: printf("Given Number is even."); break;
        default: printf("Given Number is odd."); break;
    }
    return 0;
}