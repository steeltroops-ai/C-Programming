//this code is to insert element at last.
#include <stdio.h>
#include <conio.h>
int main() {
    int arr[10],i,elements;
    printf("Enter 5 Array Elements");
    for(i=0; i<5;i++)
    scanf("%d", &arr[i]);

    printf("\nEnter Element to insert :");
    scanf("%d", &elements);
    arr[i]=elements;

    printf("\nThe New array is : \n");
    for(i=0;i<6;i++) 
    printf("%d",arr[i]);
    getch();
    return 0;
}