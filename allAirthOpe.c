#include <stdio.h>
int main(){
    float a,b,c;
    int d=5,e=6,t;
    printf("Enter Value of A: \n");
    scanf("%f", &a);
    printf("Enter the VAlue of B: \n");
    scanf("%f", &b);
    c=a+b;
    printf("a+b=%f\n",c);
    c=a-b;
    printf("a-b=%f\n",c);
    c=a*b;
    printf("a*b=%f\n",c);
    t=d%e;
    printf("a%b=%d\n",t);
    return 0;
}