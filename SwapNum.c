#include <stdio.h>
#include <math.h>
int main(){
    float x, y ,temp;
    printf("Enter the Values of x: \n");
    scanf("%f",&x);
    printf("Enter the Values of y: \n");
    scanf("%f",&y);
    /*
    temp=x;
    x=y;
    y=temp;
    */
    x=x+y;
    y=x-y;
    x=x-y;
    
    printf("The Value of x = %f\n",x);
    printf("The Value of y = %f\n",y);
    return 0;
}