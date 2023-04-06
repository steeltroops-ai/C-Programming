#include <stdio.h>
int main(){
    float l,b,Area;
    printf("Enter the length: \n");
    scanf("%f", &l);
    printf("ENter the breadth: \n");
    scanf("%f", &b);
    Area=l*b;
    printf("Area of the rectangle is = %f",Area);
    return 0;
}