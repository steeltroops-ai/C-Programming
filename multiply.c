#include <stdio.h>
int main(){
    int a[100],b[100],c[100],n,i,j;
    printf("Enter the elements: ");
    scanf("%d",&n);
    printf("Enter the first array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[n]);
    printf("Enter the second array: ");
    for(i=0;i<n;i++)
    scanf("%d",&b[n]);
    for(i=0;i<n;i++)
    c[i]=a[i]+b[i];
    printf("Sum of two array : \n");
    for(i=0;i<n;i++)
    printf("%d",c[i]);
    return 0;
}