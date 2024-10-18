#include <stdio.h>
void swap(int*, int*);
void main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("before calling a&b: %d%d",a,b);
    swap(&a,&b);
    printf("%d%d",a,b);
}
void main(int *a, int *b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

