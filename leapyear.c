#include <stdio.h>
#include <stdbool.h>
bool checkYear(int year){
    if(year%400==0)
    return true;
    if(year%100==0)
    return false;
    if(year%4==0)
    return true;
    return false;
}
int main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    checkYear(year)?printf("%d is a leap year.",year):printf("%d is not a leap year.",year);
    return 0;
}