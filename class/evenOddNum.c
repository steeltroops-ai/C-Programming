#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[10];
    int *arrPtr=&arr;
    int arrEven[10];
    int *pEven=&arrEven;
    int arrOdd[10];
    int *pOdd=&arrOdd;
    int i,j;
    for (i=0;i<10;i++){
        arr[i]=rand()%100;

        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
            printf("Even Number.");
        }
        else{
            printf("%d\n",arr[i]);
            printf("Odd Number.");
        }
    }
}