#include <stdio.h>
int main(){
    int x;
    printf("Enter :");
    scanf("%d",&x);
    if((x>='a' && x <='z') || (x >= 'A' && x <= 'Z'))
    printf("Given Data is Aplhabet.");
    else if (x>=0 && x<=9)
    printf("Given Data is Number.");
    else
    printf("Given Data is special characters");
    return 0;
}