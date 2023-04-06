#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter the desired number 1 :");
    scanf("%d",&num1);
    printf("Enter the desired number 2 :");
    scanf("%d",&num2);

    switch(num1<num2){ 
        case 0: printf("%d is greater Number",num1);break;
        case 1: printf("%d is greater Number",num2);break;
    }
    return 0;
}