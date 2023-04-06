#include <stdio.h>
int main(){
    float Rad,Dia,Cir,Area;
    printf("Enter the Radius of Circle: \n");
    scanf("%f",&Rad);
    Dia=2*Rad;
    printf("Diameter of the Circle = %f\n",Dia);
    Cir=2*31.4*Rad;
    printf("Circumference of the circle = %f\n",Cir);
    Area=3.14*Rad*Rad;
    printf("Area of the circle=%f\n",Area);
    return 0;
}