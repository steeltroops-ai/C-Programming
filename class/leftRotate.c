#include <stdio.h>
int main(){
    int i,j,n,first;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;a<n;i++){
        scanf("%d",&a[i]);
    }
    int length = sizeof(a)/sizeof(a[0]);
    for(i=0;a<n;i++){
        first=a[0];
        for(j=0;j<length-1;j++){
            a[j]=first;
        }
        printf("\n");
    }
    printf("Array after Left Rotation : \n");
        for (i=0;i<length;i++){
            printf(" %d",a[i]);
        }
    return 0;
}