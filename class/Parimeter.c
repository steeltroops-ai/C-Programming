#include <stdio.h>
int main(){
    float l, w, perimeter;
    printf("Enter the Value of l: \n");
    scanf("%f", &l);
    printf("Enter the Value of w: \n");
    scanf("%f", &w);
    perimeter=2*(l+w);
    printf("The Perimeter of the rectangle is %f",perimeter);
    return 0;
}
