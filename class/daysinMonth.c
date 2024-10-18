#include <stdio.h>
int main(){
    int m;
    printf("Enter the Number of Month...");
    scanf("%d",&m);
    if (m==2){
        printf("Total days in month are : 28");
    }
    else if (m==1,3,5,7,8,10,12){
        printf("Total days in this month are : 31");
    }
    else if (m==4,6,9,11){
        printf("Total days in month are : 30");
    }
    else{
        printf("Give the correct Number of Month");
    }
    return 0;
}