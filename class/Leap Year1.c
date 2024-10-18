#include <stdio.h>
int main(){
    int year;
    printf("Enter the Year :");
    scanf("%d",&year);
	if (year % 400 == 0){
        printf("Given Year is a Leap Year");
    }
	if (year % 100 == 0){
        printf("Given Year is not a Leap Year");
    }
	if (year % 4 == 0){
        printf("Given Year is a Leap Year");
    }
    else{
        printf("Given Year is not a Leap Year");
    }
    return 0;
}