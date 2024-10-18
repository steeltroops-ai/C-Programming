#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter the Num1 and Num2 :");
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1<num2){
        printf("%d is Min Number",num1);
    }
    else{
        printf("%d is Min Number",num2);
    }
    return 0;
}